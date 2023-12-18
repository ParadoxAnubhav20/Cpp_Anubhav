#include <stack>
#include <iostream>
using namespace std;
void copyContents(stack<int>& s, stack<int>& p) {
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    while (!temp.empty()) {
        p.push(temp.top());
        temp.pop();
    }
}
int main() {
    stack<int> s;
    stack<int> p;
    s.push(12);
    s.push(16);
    s.push(14);
    s.push(8);
    s.push(19);
    copyContents(s, p);
    while (!p.empty()) {
        cout << p.top() << "\n";
        p.pop();
    }
    cout << endl;
    return 0;
}
