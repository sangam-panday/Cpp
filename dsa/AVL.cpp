#include <iostream>
using namespace std;

// Node structure
struct Node {
    int key, height;
    Node *left, *right;

    Node(int val) {
        key = val;
        height = 1;
        left = right = nullptr;
    }
};

// Helper: Get height of a node
int height(Node* node) {
    return node ? node->height : 0;
}

// Helper: Get balance factor
int getBalance(Node* node) {
    return node ? height(node->left) - height(node->right) : 0;
}

// Update node's height
void updateHeight(Node* node) {
    node->height = 1 + max(height(node->left), height(node->right));
}

// Right rotation
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    updateHeight(y);
    updateHeight(x);

    return x; // New root
}

// Left rotation
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    updateHeight(x);
    updateHeight(y);

    return y; // New root
}

// Insert with rebalancing
Node* insert(Node* node, int key) {
    // 1. Perform normal BST insert
    if (!node) return new Node(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else // Duplicates not allowed
        return node;

    // 2. Update height
    updateHeight(node);

    // 3. Get balance factor
    int balance = getBalance(node);

    // 4. Rebalance if needed
    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node; // Unchanged
}

// In-order traversal
void inOrder(Node* root) {
    if (root) {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}

// Demo
int main() {
    Node* root = nullptr;

    int keys[] = {30, 20, 10, 25, 40, 50};
    for (int key : keys) {
        root = insert(root, key);
    }

    cout << "In-order traversal of AVL tree: ";
    inOrder(root);
    cout << endl;

    return 0;
}

