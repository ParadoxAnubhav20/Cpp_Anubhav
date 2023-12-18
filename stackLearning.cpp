#include <iostream>
using namespace std;
class Stack {
private:
    int top;
    int size;
    int* st;
public:
    //constructor to create the stack
    Stack(int s) {
        size = s;
        st = new int[size];
        top = -1;
    }
    bool checkEmpty() {
        return top == -1;
    }
    bool checkFull() {
        return top == size - 1;
    }
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
    void push(int x) {
        if (checkFull()) {
            cout << "Stack Overflow\n";
        }
        else {
            top++;
            st[top] = x;
        }
    }
    int getTop() {
        if (!checkEmpty()) {
            return st[top];
        }
        else {
            return -1;
        }
    }
    int pop() {
        if (!checkEmpty()) {
            top--;
            return st[top + 1];
        }
        return -1;
    }
    int getSize() {
        return size;
    }
    ~Stack() {
        delete[] st;
    }
};
int main() {
    Stack* s = new Stack(6);
    s->push(2);
    s->push(4);
    s->push(5);
    s->push(9);
    s->push(8);
    s->push(7);
    s->display();
    cout << "Current Top: " << s->getTop() << "\n";
    cout << "The Popped element is: " << s->pop() << "\n";
    cout << "The Popped Element is: " << s->pop() << "\n";
    s->display();
    s->push(12);
    cout << "Current Top: " << s->getTop() << "\n";
    s->display();
    delete s;
    return 0;
}
