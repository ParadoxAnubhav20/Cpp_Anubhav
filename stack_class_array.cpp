#include <iostream>
using namespace std;
class Stack
{
private:
    int size;
    int top;
    int* S;
public:
    // Constructor to initialize the Stack
    Stack(int y)
    {
        size = y;
        top = -1;
        S = new int[size];
    }
    // Destructor to free the dynamically allocated memory
    ~Stack()
    {
        delete[] S;
    }
    // Push an element to the top of the Stack
    void push(int x)
    {
        if (top == size - 1)
            cout << "Stack overflow\n";
        else
        {
            top++;
            S[top] = x;
        }
    }
    // Pop an element from the top of the Stack
    int pop()
    {
        if (top == -1){
            cout << "Stack underflow\n";
            return -1;
        }
        return S[top--];

    }
    // Check if the Stack is empty
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    // Check if the Stack is full
    bool isFull()
    {
        if (top == size - 1)
            return true;
        else
            return false;
    }
    // Return the top element of the Stack
    int stackTop()
    {
        if (!isEmpty())
            return S[top];
        else
            return -1;
    }
    // Return the element at a specific index from the top of the Stack
    int peek(int index)
    {
        if (top - index + 1 < 0)
            cout << "Invalid index\n";
        else
            return S[top - index + 1];
    }
    // Display the elements of the Stack
    void display()
    {
        if (isEmpty())
            cout << "Stack is empty\n";
        else
        {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--)
                cout << S[i] << " ";
            cout << endl;
        }
    }
};
int main()
{
    // Create a Stack object
    Stack st(5);
    // Push elements to the Stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // Display the elements of the Stack
    st.display();
    // Return the top element of the Stack
    cout << "Top element is: " << st.stackTop() << endl;
    // Return the element at a specific index from the top of the Stack
    cout << "Element at index 2 from top is: " << st.peek(2) << endl;
    // Pop elements from the Stack
    cout << "Popped element is: " << st.pop() << endl;
    cout << "Popped element is: " << st.pop() << endl;
    // Display the elements of the Stack
    st.display();
    cout << "Popped element is: " << st.pop() << endl;
    cout << "Popped element is: " << st.pop() << endl;
    st.display();
    return 0;
}
