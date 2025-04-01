#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* root = NULL;
struct node* InsertNode(struct node *node,int num){
    if(node == NULL){
        struct node *NewNode = (struct node*)malloc(sizeof(struct node));
        NewNode -> data = num;
        NewNode -> left = NULL;
        NewNode -> right = NULL;
        return NewNode;
    }
    if(num < node -> data){
        node -> left = InsertNode(node->left, num);
    }
    else if(num > node -> data){
        node -> right = InsertNode(node -> right, num);
    }
}
void Display(struct node *node){
    if(node == NULL){
        return;
    }
    Display(node->left);
    cout<<node->data<<" ";
    Display(node->right);
}
void PreDisplay(struct node *node){
    if(node == NULL){
        return;
    }
    cout<<node->data<<" ";
    Display(node->left);
    Display(node->right);
}
void PostDisplay(struct node *node){
    if(node == NULL){
        return;
    }
    Display(node->left);
    Display(node->right);
    cout<<node->data<<" ";
}
struct node* deletenode(struct node* root, int key) {
    if (root == NULL) return root;
    if (key < root->data) {
        root->left = deletenode(root->left, key);
    } else if (key > root->data) {
        root->right = deletenode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
    }
    return root;
}
int main() {
    root = InsertNode(root, 50);
    root = InsertNode(root, 30);
    root = InsertNode(root, 70);
    root = InsertNode(root, 20);
    root = InsertNode(root, 40);
    root = InsertNode(root, 35);
    root = InsertNode(root, 45);
    root = InsertNode(root, 60);
    root = InsertNode(root, 80);

    cout << "Inorder Traversal of BST: ";
    Display(root);
    cout << endl;
    cout << "Preorder Traversal of BST: ";
    PreDisplay(root);
    cout << endl;
    cout << "Postorder Traversal of BST: ";
    PostDisplay(root);
    cout << endl;

    return 0;
}
