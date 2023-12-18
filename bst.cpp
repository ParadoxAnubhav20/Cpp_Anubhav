#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insertRecursive(Node* current, int value) {
        if (current == nullptr) {
            return new Node(value);
        }

        if (value < current->data) {
            current->left = insertRecursive(current->left, value);
        } else if (value > current->data) {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

    bool searchRecursive(Node* current, int value) {
        if (current == nullptr) {
            return false;
        }

        if (value == current->data) {
            return true;
        } else if (value < current->data) {
            return searchRecursive(current->left, value);
        } else {
            return searchRecursive(current->right, value);
        }
    }

    void inOrderTraversalRecursive(Node* current) {
        if (current == nullptr) {
            return;
        }

        inOrderTraversalRecursive(current->left);
        cout << current->data << " ";
        inOrderTraversalRecursive(current->right);
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    bool search(int value) {
        return searchRecursive(root, value);
    }

    void inOrderTraversal() {
        inOrderTraversalRecursive(root);
        cout << endl;
    }

    // Add more methods like deleteNode, preOrderTraversal, postOrderTraversal, balanceTree, etc.

    // Destructor to deallocate memory
    ~BST() {
        // Call a helper function to recursively delete nodes
        // (not shown in this example)
    }
};

int main() {
    BST bst;
    bst.insert(8);
    bst.insert(3);
    bst.insert(10);
    bst.insert(1);
    bst.insert(6);
    bst.insert(14);
    bst.insert(4);
    bst.insert(7);
    bst.insert(13);

    cout << "In-order traversal: ";
    bst.inOrderTraversal();

    // Perform other operations on the BST

    return 0;
}
