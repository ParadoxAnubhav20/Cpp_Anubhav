#include<iostream>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int val;
    Node(int data) {
        left = nullptr;
        right = nullptr;
        val = data;
    }
};

void display(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Display the left subtree
    display(root->left);

    // Display the current node's value
    cout << root->val << " ";

    // Display the right subtree
    display(root->right);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(2);

    cout << "Binary Tree values: ";
    display(root);
    cout << endl;

    return 0;
}
