#include <stdio.h>
#include <stdlib.h>

struct Node{
    int item;
    struct Node* left;
    struct Node* right;
};

void PreOrderTraversal(struct Node* root){
    if (root==NULL) return ;
    printf("%d-->",root->item);
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(struct Node* root){
    if (root == NULL) return ;
    InOrderTraversal(root->left);
    printf("%d-->",root->item);
    InOrderTraversal(root->right);
}

void PostOrderTraversal(struct Node* root){
    if (root == NULL) return ;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    printf("%d-->",root->item);
}


// Create a new Node
struct Node* createNode(int value) {
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct Node* insertLeft(struct  Node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct Node* insertRight(struct Node* root, int value) {
  root->right = createNode(value);
  return root->right;
}


int main(){
struct Node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);

  printf("Inorder traversal \n");
  InOrderTraversal(root);

  printf("\nPreorder traversal \n");
  PreOrderTraversal(root);

  printf("\nPostorder traversal \n");
  PostOrderTraversal(root);
}