#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int>& s){
    stack<int> t1,t2;
    while(!s.empty()){
        int cur=s.top();
        s.pop();
        t1.push(cur);
    }
    while(!t1.empty()){
        int cur=t1.top();
        t1.pop();
        t2.push(cur);
    }
    while(!t2.empty()){
        int cur=t2.top();
        t2.pop();
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
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    displayStack(st);
    reverse(st);
    displayStack(st);
    return 0;
}
