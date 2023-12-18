#include <iostream>
#include<queue>
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
void preOrderTraversal(Node* root) {
    // Base case: If the root is null, return
    if (root == nullptr) {
        return;
    }
    // Print the value of the current node
    cout << root->val << endl;
    // Recursively traverse the left subtree
    preOrderTraversal(root->left);
    // Recursively traverse the right subtree
    preOrderTraversal(root->right);
}
// Function to perform in-order traversal of a binary tree
void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return; // Base case: If the current node is null, return
    }
    // Traverse left subtree recursively
    inOrderTraversal(root->left);
    // Print the value of the current node
    cout << root->val << endl;
    // Traverse right subtree recursively
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root) {
    if (root == nullptr) {
        return; // Base case: If the current node is null, return
    }
    // Traverse left subtree recursively
    postOrderTraversal(root->left);
    // Traverse right subtree recursively
    postOrderTraversal(root->right);
    // Print the value of the current node
    cout << root->val << endl;
}
void levelOrderTraversal(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int nodeAtCurrentLevel = q.size();
        // Process all nodes at the current level
        while (nodeAtCurrentLevel--) {
            Node* currNode = q.front();
            q.pop();
            cout << currNode->val << " ";
            // Enqueue left child if it exists
            if (currNode->left) {
                q.push(currNode->left);
            }
            // Enqueue right child if it exists
            if (currNode->right) {
                q.push(currNode->right);
            }
        }
        cout<<endl;
    }
}
int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left=new Node(10);
    root->left->left->right=new Node(15);
    // Perform preorder traversal
    cout << "Preorder traversal: ";
    preOrderTraversal(root);
    cout << endl;
    cout<<"Inorder Traversal:";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Postorder Traversal:";
    postOrderTraversal(root);
    cout<<endl;
    cout<<"Level Order Traversal\n";
    levelOrderTraversal(root);
    cout<<endl;
    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}
