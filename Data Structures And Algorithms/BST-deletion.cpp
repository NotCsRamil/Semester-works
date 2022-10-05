#include <iostream>
using namespace std;
  
struct Node {
    int key;
    struct Node *left, *right;
};
  
Node* newNode(int item)
{
    Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
void inorder(Node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

Node* insert(Node* node, int key)
{
    if (node == NULL)
        return newNode(key);
  
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
  
    return node;
}

Node* deleteNode(Node* root, int k)
{
    if (root == NULL)
        return root;
  
    if (root->key > k) {
        root->left = deleteNode(root->left, k);
        return root;
    }
    else if (root->key < k) {
        root->right = deleteNode(root->right, k);
        return root;
    }
  
    
    if (root->left == NULL) {
        Node* temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL) {
        Node* temp = root->left;
        delete root;
        return temp;
    }
  
    // If both children exist
    else {
  
        Node* Parent = root;
  
        // Find successor
        Node* suc = root->right;
        while (suc->left != NULL) {
            Parent = suc;
            suc = suc->left;
        }
  
        if (Parent != root)
            Parent->left = suc->right;
        else
            Parent->right = suc->right;
  
        root->key = suc->key;
  
        delete suc;
        return root;
    }
}
  
int main()
{
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
  

    inorder(root);
  
    printf("\nDelete 20\n");
    root = deleteNode(root, 20);

    inorder(root);
  
    printf("\nDelete 30\n");
    root = deleteNode(root, 30);

    inorder(root);
  
    printf("\nDelete 50\n");
    root = deleteNode(root, 50);
 
    inorder(root);
  
}


