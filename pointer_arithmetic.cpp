#include<iostream>
using namespace std;
int main(){
    int b=15;
    int *p;
    p=&b;
    cout<<p<<endl;
    cout<<"Value at address p:"<<*p<<endl;
    cout<<sizeof(int)<<endl;
    cout<<"Value at address p:"<<*(p+1)<<endl;
    cout<<p+3<<endl;
    cout<<p-1<<endl;
    return 0;
}