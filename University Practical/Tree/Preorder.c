#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node* left ;
    struct node* right ;
};

struct node* root= NULL;

struct node* newNode(int value){
    struct node* new_n;
    new_n = (struct node*)malloc(sizeof(struct node));
    new_n->data = value ;
    new_n->left = NULL;
    new_n->right = NULL;
    return new_n;
}

struct node* insert(struct node* root,int data){
    if(root == NULL){
        return newNode(data);
    }
    if(data < root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root ;
}

void iOT(struct node* root){
    if(root != NULL){
        iOT(root->left);
        printf("%d->",root->data );
        iOT(root->right);
    }
}

void preOT(struct node* root){
    if(root!=NULL){
        printf("%d->",root->data);
        preOT(root->left);
        preOT(root->right);
    }
}

void posOT(struct node* root){
    if(root!=NULL){
        posOT(root->left);
        posOT(root->right);
        printf("%d->",root->data);
    }
}

int main(){
    for(int i=1;i<=10;i++){
        root = insert(root,i);
    }
    printf("\n");
    iOT(root);
    printf("\n");
    preOT(root);
    printf("\n");
    posOT(root);
    return 0;
}