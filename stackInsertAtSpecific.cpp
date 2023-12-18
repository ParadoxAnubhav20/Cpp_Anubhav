#include<iostream>
#include<stack>
using namespace std;
void insertAtSpecific(stack<int>& s,int ele,int idx){
    int size=s.size();
    int count=0;
    stack<int> temp;
    while(count<size-idx){
        count++;
        int cur=s.top();
        s.pop();
        temp.push(cur);
    }
    s.push(ele);
    while (!temp.empty()) {
        int cur = temp.top();
        temp.pop();
        s.push(cur);
    }
}
void displayStack(const stack<int>& st) {
    cout << "Elements in the stack:\n";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << "\n";
        temp.pop();
    }
}
int main() {
    stack<int> s;
    s.push(12);
    s.push(15);
    s.push(18);
    s.push(25);
    s.push(30);
    displayStack(s);
    int ele;
    cout << "Enter the element to be inserted: ";
    cin >> ele;
    insertAtSpecific(s,ele,2);
    displayStack(s);
    return 0;
}