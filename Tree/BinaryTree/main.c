#include "header.h"


int main(){

  Node *root = NULL;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);

  printf("Pre-Order visit\n");
  preOrder(root);

  printf("\nIn-Order visit\n");
  inOrder(root);

  printf("\nPost-Order visti\n");
  postOrder(root);

  printf("\nHeight\n");
  printf("%d ", height(root));

  return 0;
}


Node *insert(Node *root, int val){
  Node *newNode = (Node *) malloc(sizeof(Node));
  newNode->info = val;
  newNode->left = NULL;
  newNode->right = NULL;

  if (root == NULL){
    return newNode;
  }

  if (val < root->info){
    root->left = insert(root->left, val);
  }else if( val > root->info){
    root->right = insert(root->right, val);
  }
  return root;
}

void preOrder(Node *root){
  if(root==NULL)
    return;
  printf("%d ", root->info);
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node *root){
  if(root==NULL)
    return;
  inOrder(root->left);
  printf("%d ", root->info);
  inOrder(root->right);
}

void postOrder(Node *root){
  if(root==NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  printf("%d ", root->info);
}

int height(Node *root){
  if (root == NULL){
    return 0;
  }else{
    int leftTree = height(root->left);
    int rightTree = height(root->right);

    return (leftTree > rightTree) ? leftTree + 1 : rightTree + 1;
  }
}