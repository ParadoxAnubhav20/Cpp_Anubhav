#include<iostream>
#include<stack>
using namespace std;
void stackSort(stack<int> &s){
    stack<int> tmp;
    while(!s.empty()){
        int cur = s.top();
        s.pop();
        while(!tmp.empty() && tmp.top() > cur){
            s.push(tmp.top());
            tmp.pop();
        }
        tmp.push(cur);
    }
    while(!tmp.empty()){
        s.push(tmp.top());
        tmp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(3),st.push(9),st.push(6),st.push(53),st.push(1),st.push(0),st.push(4);
    stackSort(st);
    cout<<"The Sorted elements of the stack are:";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
