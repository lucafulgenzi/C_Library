#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int info;
    struct Node *left;
    struct Node *right;
};
typedef struct Node Node;

Node *insert(Node*, int);
void preOrder(Node *root);
void inOrder(Node *root);
void postOrder(Node *root);
int height(Node *root);