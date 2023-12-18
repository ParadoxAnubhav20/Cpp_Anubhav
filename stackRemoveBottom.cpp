#include<iostream>
#include<stack>
using namespace std;
void removeFromBot(stack<int>& s){
    stack<int> temp;
    while(s.size()!=1){
        int cur=s.top();
        s.pop();
        temp.push(cur);
    }
    s.pop();
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
    removeFromBot(s);
    displayStack(s);
    return 0;
}