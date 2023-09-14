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

// struct node *del_first(struct node *head){
//     if(head==NULL){
//         printf("List is Empty.");
//     }else{
//         struct node *temp = head;
//         head = head->link;
//         free(temp);
//     }
//     return head;
// };

// struct node *del_any(struct node *head,int pos){
//     int count = 1;
//     struct node *curr = head;
//     struct node *prev = (struct node *)malloc(sizeof(struct node *));
//     if(head==NULL){
//         printf("List is Empty.");
//     }
//     if (pos==0){
//     	return del_first(head);
// 	}
//     while(curr->link!=NULL){
//         prev = curr;
//         curr = curr->link;
//         if(count == pos){
//             prev->link = curr->link;
//             free(curr);
//             break;
//         }
//         count++;
//     }return head;
    
// }
// struct node *del_any_user(struct node *head){
//     int count = 1;
//     struct node *curr = head;
//     struct node *prev = (struct node *)malloc(sizeof(struct node *));
//     int pos;
//     if(head==NULL){
//         printf("List is Empty.");
//     }
//     int nodes = count_nodes(head);
//     printf("Enter the position to delete element from [available nodes = %d]: ",nodes);
//     scanf("%d",&pos);
//     if (pos==0){
//     	return del_first(head);
// 	}
//     while(curr->link!=NULL){
//         prev = curr;
//         curr = curr->link;
//         if(count == pos){
//             prev->link = curr->link;
//             free(curr);
//             break;
//         }
//         count++;
//     }return head;
    
// }

// struct node * add_to_end(struct node *ptr,int data){
//     struct node *temp = (struct node *)malloc(sizeof(struct node *));
//     temp->data = data;
//     temp->link = NULL;
//     ptr->link = temp;
//     return temp;
// };

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

// struct node *insert_at_any(struct node *head){
// 	int count = 0;
//     struct node *ptr = head;
//     struct node *temp = (struct node *)malloc(sizeof(struct node *));
//     int pos,data;
//     if(head==NULL){
//         printf("List is Empty.");
//     }
//     int nodes = count_nodes(head);
//     printf("Enter the position to insert element at [available nodes = %d]: ",nodes);
//     scanf("%d",&pos);
//     printf("\nEnter your data: ");
//     scanf("%d",&data);
//     temp->data = data;
//     while(ptr->link!=NULL){
//     	if(count==pos-1){
//     		temp->link = ptr->link;
//     		ptr->link = temp;
//     		break;
// 		}
// 		count++;
// 	}return head;
    
// }


int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node *));
    head->data = 45;
    head->link = NULL;
    
    struct node *ptr = head;
    ptr = add_to_end(ptr,98);
    ptr = add_to_end(ptr,3);
    ptr = add_to_end(ptr,400);
    print_data(head);
    printf("Enter appropriate choice:\n1)Insert at end\n2)Delete from any position.\n3)Add at any postion\nChoice : ");
    int c,data;
    scanf("%d",&c);
    if (c==1){
    	printf("Enter your data: ");
    	scanf("%d",&data);
    	ptr = add_to_end(ptr,data);
    	print_data(head);
	}else if(c==2){
		head = del_any_user(head);
    	print_data(head);
	}else if(c==3){
		head = insert_at_any(head);
		print_data(head);
	}
    
    return 0;
}