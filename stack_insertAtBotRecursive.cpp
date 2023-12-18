#include <iostream>
#include <stack>
using namespace std;
void insertAtBotRecursive(stack<int>& st, int ele) {
    if (st.empty()) {
        st.push(ele);
        return;
    }
    int cur = st.top();
    st.pop();
    insertAtBotRecursive(st, ele);
    st.push(cur);
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
    displayStack(s);
    int ele;
    cout << "Enter the element to be inserted at Bottom: ";
    cin >> ele;
    insertAtBotRecursive(s, ele);
    displayStack(s);
    return 0;
}
