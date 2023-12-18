#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
class Stack {
private:
    Node* top;         // Pointer to the top of the stack
    int capacity;      // Maximum capacity of the stack
    int curSize;       // Current size of the stack
public:
    Stack(int c) {
        capacity = c;   // Initialize the maximum capacity
        curSize = 0;    // Initialize the current size to zero
        top = nullptr;  // Initialize the top pointer to nullptr (empty stack)
    }
    bool isEmpty() {
        return curSize == 0;  // Check if the stack is empty
    }
    bool isFull() {
        return curSize == capacity;  // Check if the stack is full
    }
    void push(int data) {
        if (isFull()) {
            cout << "Stack Overflow\n";  // If the stack is full, display an overflow message
            return;
        }
        Node* new_node = new Node(data);  // Create a new node with the given data
        new_node->next = top;             // Make the new node point to the current top
        top = new_node;                   // Update the top to be the new node
        curSize++;                        // Increment the size of the stack
    }
    int getTop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";  // If the stack is empty, display an underflow message
            return -1;
        }
        return top->data;  // Return the data of the top node
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";  // If the stack is empty, display an underflow message
            return -1;
        }
        Node* toBeRemoved = top;           // Store the node to be removed (top node)
        int result = toBeRemoved->data;    // Store the data of the node to be removed
        top = top->next;                   // Update the top to point to the next node
        delete toBeRemoved;                // Delete the node to free the memory
        curSize--;                         // Decrement the size of the stack
        return result;                     // Return the data of the removed node
    }
    int getSize() {
        return curSize;  // Return the current size of the stack
    }
    void displayStack() {
        if (isEmpty()) {
            cout << "Stack is empty\n";  // If the stack is empty, display a message
            return;
        }
        cout << "Elements in the stack: ";
        Node* current = top;                // Start from the top of the stack
        while (current != nullptr) {
            cout << current->data << " ";   // Print the data of the current node
            current = current->next;        // Move to the next node
        }
        cout << endl;
    }
};
int main() {
    Stack s(6);
    s.push(2);              // Pushing elements onto the stack
    s.push(4);
    s.push(5);
    s.push(9);
    s.push(8);
    s.push(7);
    s.displayStack();
    cout << "Current Top: " << s.getTop() << "\n";        // Printing the top element
    cout << "The Popped element is: " << s.pop() << "\n";   // Popping an element from the stack
    cout << "The Popped Element is: " << s.pop() << "\n";
    s.push(12);                  // Pushing another element onto the stack
    cout << "Current Top: " << s.getTop() << "\n";
    s.displayStack();             // Displaying all the elements in the stack
    return 0;
}
