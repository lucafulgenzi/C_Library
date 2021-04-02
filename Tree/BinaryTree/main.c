#include "header.h"


int main(){

  Node *root = NULL;
  root = insert(root, 21);
  insert(root, 20);
  insert(root, 10);
  insert(root, 43);
  insert(root, 12);
  insert(root, 54);
  insert(root, 20);

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