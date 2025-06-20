#include <iostream>
#include <queue>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool isCompleteBinaryTree(Node* root) {
    if (!root) return true;

    queue<Node*> q;
    q.push(root);
    bool foundNull = false;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        // Check left child
        if (current->left) {
            if (foundNull) return false;  // Node after null child? Not complete
            q.push(current->left);
        } else {
            foundNull = true;
        }

        // Check right child
        if (current->right) {
            if (foundNull) return false;
            q.push(current->right);
        } else {
            foundNull = true;
        }
    }

    return true;
}

// Driver code
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    // root->right->right = new Node(7);  // Uncomment to make it complete

    if (isCompleteBinaryTree(root)) {
        cout << "The binary tree is a Complete Binary Tree.\n";
    } else {
        cout << "The binary tree is NOT a Complete Binary Tree.\n";
    }

    return 0;
}
