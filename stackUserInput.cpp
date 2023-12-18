#include <iostream>
using namespace std;
class Stack {
private:
    int top; // Index of the top element
    int size; // Maximum size of the stack
    int* st; // Dynamic array to store elements
public:
    // Constructor to create the stack
    Stack(int s) {
        size = s;
        st = new int[size];
        top = -1; // Initialize top as -1 to indicate an empty stack
    }
    // Check if the stack is empty
    bool checkEmpty() {
        return top == -1;
    }
    // Check if the stack is full
    bool checkFull() {
        return top == size - 1;
    }
    // Display the elements of the stack
    void display() {
        if (checkEmpty()) {
            cout << "The Stack is Empty";
        }
        else {
            cout << "The Elements of the Stack are:";
            for (int i = top; i >= 0; i--) {
                cout << st[i] << " ";
            }
            cout << endl;
        }
    }
    // Push an element onto the stack
    void push(int x) {
        if (checkFull()) {
            cout << "Stack Overflow\n";
        }
        else {
            top++; // Increment top
            st[top] = x; // Add the element to the top position
        }
    }
    // Get the top element of the stack
    int getTop() {
        if (!checkEmpty()) {
            return st[top];
        }
        else {
            return -1; // Return -1 if the stack is empty
        }
    }
    // Remove and return the top element from the stack
    int pop() {
        if (!checkEmpty()) {
            int popped = st[top]; // Store the top element
            top--; // Decrement top to remove the element
            return popped; // Return the popped element
        }
        return -1; // Return -1 if the stack is empty
    }
    // Get the size of the stack
    int getSize() {
        return top+1;
    }
    // Destructor to free the memory allocated for the stack
    ~Stack() {
        delete[] st;
    }
};
int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack* s = new Stack(size);
    int element;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> element;
        s->push(element);
    }
    cout<<"Current Capactity of Stack:"<<s->getSize()<<"\n";
    s->display();
    cout << "Current Top: " << s->getTop() << "\n";
    cout << "The Popped element is: " << s->pop() << "\n";
    cout << "The Popped Element is: " << s->pop() << "\n";
    int newElement;
    cout << "Enter a new element to push: ";
    cin >> newElement;
    s->push(newElement);
    cout << "Current Top: " << s->getTop() << "\n";
    cout<<"Current Capactity of Stack:"<<s->getSize()<<"\n";
    s->display();
    delete s;
    return 0;
}
