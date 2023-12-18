#include<iostream>
#include<stack>
using namespace std;
void copyContentsRecursive(stack<int>& s,stack<int>& p){
    if(s.empty()) return;
    int cur=s.top();
    s.pop();
    copyContentsRecursive(s,p);
    p.push(cur);
}
int main() {
    stack<int> s;
    stack<int> p;
    s.push(12);
    s.push(16);
    s.push(14);
    s.push(8);
    s.push(19);
    copyContentsRecursive(s, p);
    while (!p.empty()) {
        cout << p.top() << "\n";
        p.pop();
    }
    return 0;
}