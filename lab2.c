#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
int count_nodes(struct node *head){
	int count=0;
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        ptr = ptr->link;
        count++;
    }return count;
};

void print_data(struct node *head){
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
};

struct node * add_to_end(struct node *ptr,int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
};

int main() {
    int n,m,count=3;
    struct node *headA, *headB = NULL;
    headA = (struct node *)malloc(sizeof(struct node *));
    headB = (struct node *)malloc(sizeof(struct node *));
    headA->data = 1;
    headA->link = NULL;
    headB->data = 20;
    headB->link = NULL;
    struct node *ptrA = headA;
    ptrA = add_to_end(ptrA,2);
    ptrA = add_to_end(ptrA,3);
    ptrA = add_to_end(ptrA,4);
    struct node *ptrB = headB;
    ptrB = add_to_end(ptrB,100);
    ptrB = add_to_end(ptrB,300);
    ptrB = add_to_end(ptrB,500);
    ptrB = add_to_end(ptrB,600);
    n = count_nodes(headA);
    m = count_nodes(headB);
    struct node *curr = NULL;
    curr = (struct node *)malloc(sizeof(n+m));
    struct node *ptr = NULL;
    ptr = (struct node *)malloc(sizeof(struct node *));
    // printf("%d\n",n);
    // printf("%d\n",m);
    // print_data(headA);
    // print_data(headB);
    curr = headA;
    // ptrA = headA;
    // ptrB=headB;
    while(headA!=NULL || headB!=NULL){
        if(count%2==0){
            // printf("from headA\n");
            ptr = headA;
            headA = headA->link;
            printf("%d\n",ptr->data);
            // if(headA==NULL){
            //     break;
            // }
        }
        else{
            // printf("from headB\n");
            ptr = headB;
            headB = headB->link;
            printf("%d\n",ptr->data);
            // if(headB==NULL){
            //     break;
            // }
        }
        // curr->link = ptr->link;
        count++;
    }
    // count_nodes(curr);
    // print_data(curr);

}