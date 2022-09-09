#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d -> ", n->data);
        n = n->next;
    }
    printf("NULL");
}

//Add new node in beginning 
void push(struct Node** head_ref, int new_data)
{

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

// Add node after given node 
void insertAfter(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
     struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
     new_node->data = new_data;
     new_node->next = prev_node->next;
     prev_node->next = new_node;
}

// New node at the end 
void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;  
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL){
       *head_ref = new_node;
       return;
    } 
    while (last->next != NULL){
        last = last->next;
        }
    last->next = new_node;
    return;   
}


int main(){
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Third = (struct Node *)malloc(sizeof(struct Node));
    Head->data = 12;
    Head->next = Second ;
    Second->data = 34;
    Second ->next = Third;
    Third->data = 32;
    Third->next = NULL;
    push(&Head,45);
    insertAfter(Second,22);
    append(&Head , 69);
    printList(Head);
    return 0;
}