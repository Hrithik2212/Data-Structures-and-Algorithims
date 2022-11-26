#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* next ;
    int data ; 
};


// Add a node in front 
void push(struct Node** head_ref , int new_data){
    struct Node* new_node = (struct node*)malloc(sizeof(struct Node));
    new_node->data = new_data ; 
    new_node->next = (*head_ref) ;
    (*head_ref) = new_node ;
}

// Insert a node in mid 
void insert(struct Node* prev_node , int new_data ){
    if(prev_node == NULL){
        printf("\nPrevious Node cannot be null\n");
        return ;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data ; 
    new_node->next = prev_node->next ; 
    prev_node->next = new_node ;
}

//  Add node in end 
void append(struct Node** head_ref , int data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref ;
    new_node->data = data ; 
    new_node->next = NULL ; 
    if(*head_ref == NULL){
        *head_ref = new_node ;  
        return ;
    }
    while(last->next != NULL){
        last = last->next ;
    }  
    last->next = new_node ;
    return ;
}

// print linked list 
void print_linked_list(struct Node* node){
    printf("Linked List :  \n ") ; 
    while(node != NULL){
        printf("%d -> ",node->data) ; 
        node = node->next ;
    } 
    printf("\n");
}

void delete(struct Node** head_ref, int key){
    
    
}

int main(){
    struct Node* Head = NULL;
    push_front(&Head , 6 );
    push_front(&Head , 5) ;
    push_last(&Head , 2) ;
    print_linked_list(Head);
    insert(Head->next->next , 10) ;
    push_front(&Head , 4);
    print_linked_list(Head);
    return 0;
}