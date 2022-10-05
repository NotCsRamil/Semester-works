#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *new(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void in(struct node* root) {
  if (root != NULL) {
    in(root->left);
    printf("%d ", root->key);
    in(root->right);
  }
}
void pre(struct node* root) {
  if (root == NULL) return;
  printf("%d ", root->key);
  pre(root->left);
  pre(root->right);
}

void post(struct node* root) {
  if (root == NULL) return;
  post(root->left);
  post(root->right);
  printf("%d ", root->key);
}

struct node *insert(struct node *node, int key) {
  if (node == NULL) 
  return new(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

int main() {
  struct node *root = NULL;
  int n,x;
  int i;
  printf("enter the number of elements ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter the element:-  ");
    scanf("%d",&x);
    root = insert(root, x);
  }

printf("Inorder traversal \n");
in(root);

printf("\nPreorder traversal \n");
pre(root);

printf("\nPostorder traversal \n");
post(root);
}
