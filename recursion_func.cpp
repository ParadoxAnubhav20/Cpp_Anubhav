#include<iostream>
using namespace std;

void f(int count){
    if(count==4) return;
    cout<<count<<" ";
    count++;
    f(count);
}

int main(){
    int count = 0;
    f(count);
    return 0;
}
