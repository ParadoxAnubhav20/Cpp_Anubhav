#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> st;
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    while(!qu.empty()){
        int ele=qu.front();
        st.push(ele);
        qu.pop();
    }
    while(!st.empty()){
        int ele=st.top();
        qu.push(ele);
        st.pop();
    }
    cout<<"Elements in the queue are\n";
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
        }cout<<"\n";
return 0;
}