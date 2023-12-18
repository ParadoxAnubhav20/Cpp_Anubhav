#include <iostream>
#include <stack>
using namespace std;
void insertAtBot(stack<int>& st, int ele) {
    stack<int> temp;
    while (!st.empty()) {
        int cur = st.top();
        st.pop();
        temp.push(cur);
    }
    //inserting the element at the bottom
    st.push(ele);
    while (!temp.empty()) {
        int cur = temp.top();
        temp.pop();
        st.push(cur);
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
    displayStack(s);
    int ele;
    cout << "Enter the element to be inserted at Bottom: ";
    cin >> ele;
    insertAtBot(s, ele);
    displayStack(s);
    return 0;
}
