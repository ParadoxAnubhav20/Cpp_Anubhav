#include <iostream>
using namespace std;
class Stack {
private:
    int *arr, top, size;
public:
    Stack(int x) {
        size = x;
        top = -1;
        arr = new int[size];
    }
    ~Stack() {
        delete[] arr;
    }
    void push(int data) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = data;
    }
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
    //deep copy
    void operator=(Stack &s){
        top=s.top;
        size=s.size;
        arr=new int [size];
        for(int i=0;i<=top;i++){
            arr[i]=s.arr[i];
        }
    }
};
int main() {
    Stack* ptr = new Stack(5);
    ptr->push(10);
    ptr->push(20);
    ptr->push(30);
    ptr->display();
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    // s.push(4);
    // s.push(5);
    s.display();
    s = *ptr;
    s.display();
    delete ptr;
    s.display();
    return 0;
}
