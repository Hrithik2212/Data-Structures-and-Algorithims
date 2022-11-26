#include <stdlib.h>
#include <stdio.h>

struct node {
     struct node* next ;
     int data ;
};


void push(struct node** head_ref , int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data ; 
    new_node->next = (*head_ref);
    (*head_ref) = new_node ;
}

void insert(struct node* prev_node , int data){
    if(prev_node == NULL){
        printf("\nPrevious Node cannot be null\n");
        return ;
    }
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data ; 
    new_node->next = prev_node->next ;
    prev_node->next = new_node ;
}

void append(struct node** head_ref , int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data ;
    new_node->next = NULL ;
    struct node* last = *head_ref ;
    if(*head_ref == NULL){
        *head_ref = new_node ;
        return ;
    } 
    while(last->next!=NULL){
        last = last->next ;
    }
    last->next = new_node ;
    return ; 
}

void print_linkedlist(struct node* node){
    printf("\nLinked List : \n");
    while(node != NULL){
        printf("%d ->",node->data);
        node = node->next ;
    }
}

int main(){
    struct node* head = NULL ; 
    push(&head , 10) ;
    push(&head , 7);
    append(&head , 12);
    print_linkedlist(head);
    insert(head->next , 13);
    print_linkedlist(head);
    return 0; 
}