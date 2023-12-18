#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(3);
    d.push_back(2);
    d.push_front(5);
    d.push_front(6);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}