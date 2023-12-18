#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[]={'a','b','c','d','\0'};
    cout<<a<<'\n';
    char b[20];
    cin.get(b,20);
    cout<<b<<'\n';
    cout<<"Length of String:"<<strlen(a)<<"\n";
    cout<<sizeof(a)<<"\n";
}