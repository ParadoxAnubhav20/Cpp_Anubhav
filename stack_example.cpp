#include<iostream>
using namespace std;
class Stack {
private:
    int top;
    int size;
    int* arr;
public:
    //constructor to create stack
    Stack(int x) {
        top = -1;
        size = x;
        arr = new int[size];
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top == size - 1;
    }
    void push(int data) {
        if (is_full())
            cout << "Stack Overflow\n";
        else {
            top++;
            arr[top] = data;
        }
    }
    int pop() {
        if (is_empty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int get_top() {
        if (is_empty()){
            cout << "Stack is Empty\n";
            return -1;}
        else {
            return arr[top];
        }
    }
    void display() {
        if (is_empty())
            cout << "Stack is empty";
        else {
            cout << "Stack elements are:";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    ~Stack()
    {
        delete[] arr;
    }
};
int main() {
    Stack st(5);
    st.push(2), st.push(3), st.push(4), st.push(6), st.push(9);
    st.display();
    cout<<"Top Element is:"<<st.get_top()<<endl;
    cout<<"The Popped Element is:"<<st.pop()<<endl;
    st.display();
    st.pop();
    st.display();
    return 0;
}
