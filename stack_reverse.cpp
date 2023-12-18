#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> c;
    c.push(2),c.push(3),c.push(1),c.push(15);
    while(!c.empty()){
        cout<<c.top()<<" ";
        c.pop();
    }
    return 0;
}