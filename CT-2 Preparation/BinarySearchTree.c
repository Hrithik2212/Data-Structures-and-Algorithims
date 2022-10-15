#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node *newNode(int item) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct Node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->data);
    inorder(root->right);
  }
}

struct Node* insert(struct Node* node , int item){
  if (node == NULL) return newNode(item);
  if (item < node->data)
    node->left = insert(node->left, item);
  else
    node->right = insert(node->right, item);
  return node;
}

int main() {
  struct Node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: \n");
  inorder(root);
}