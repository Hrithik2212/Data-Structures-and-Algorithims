#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node* next ;
};

struct node* front=NULL;
struct node* rear=NULL;

void LinkedListTraversal(struct node* ptr){
    if(!ptr){
        printf("Queue is empty!\n");
    }
    while(ptr){
        printf("%d ",ptr->data);
        ptr = ptr->next ;
    }
    
}

void enqueue(int data){
    struct node* new_n ;
    new_n = (struct node*)malloc(sizeof(struct node));
    if(!new_n){
        printf("\nQueue is full\n");
    }
    else{
        new_n->data = data;
        new_n->next = NULL;
        if(!front){
            front = rear =new_n;
        }
        else{
            rear->next = new_n;
            rear = new_n ;
        }
    }
}

int dequeue(){
    int val = -1 ;
    struct node* ptr;
    ptr = front ;
    if(!front){
        printf("\nQueue is empty\n");
    }
    else{
        front = front->next ;
        val =ptr->data;
        free(ptr);
    }
    return val ;
}

void reverse(struct node** head_ref)
{
    struct node* prev = NULL;
    struct node* current = *head_ref;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

int main(){
    int n,i,t;
    n =10 ;
    dequeue();
    for(i=1;i<n;i++){
        enqueue(i);
    }
    LinkedListTraversal(front);
    dequeue();
    printf("\n");
    reverse(&front);
    LinkedListTraversal(front);
    return 0;
}