#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(15);
    s.push(19);
    s.push(12);
    s.push(10);
    cout<<"Size:"<<s.size()<<endl;
    s.pop();
    s.pop();
    cout<<"Size:"<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}