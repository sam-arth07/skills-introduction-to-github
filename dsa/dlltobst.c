#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* prev;
    struct ListNode* next;
};

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct ListNode* createListNode(int value){
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode*));
    temp->data = value;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
};

struct ListNode* insert(struct ListNode* head,int value){
    struct ListNode* newNode = createListNode(value);
    if (head==NULL){
        return newNode;
    }
    struct ListNode* current = head;
    while(current->next!=NULL&&current->next->data<value){
        current=current->next;
    }
    if (current->data>=value){
        newNode->next=current;
        newNode->prev=current->prev;
        current->prev=newNode;
        if(newNode->prev!=NULL){
            newNode->prev->next=newNode;
        }
        if (current==head){
            head = newNode;
        }
        else{
            newNode->next = current->next;
            current->next = newNode;
            newNode->prev=current;
            if(newNode->next!=NULL){
                newNode->next->prev=newNode;
            }
        }
    }
    return head;
}

struct TreeNode* sortedDLLtoBST(struct ListNode* head,int n){
    if(n<=0){
        return NULL;
    }
    struct TreeNode* left=sortedDLLtoBST(head,n/2);
    struct TreeNode* root = head;
    root->left = left;
    head = head->next;
    root->right=sortedDLLtoBST(head,n-n/2-1);
    return root;
}

void inorderTraversal(struct TreeNode* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        printf("%d",root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct ListNode* head = NULL;
    head = insert(head,1);
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    head = insert(head,5);
    head = insert(head,6);
    head = insert(head,7);

    int length = 0
    struct ListNode* temp = head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }

    struct TreeNode* bstRoot = sortedDLLtoBST(head,length);
    printf("Inorder traversal of balanced BST\n");
    inorderTraversal(bstRoot);
    printf("\n");

    return 0;
}