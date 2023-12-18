#include<iostream>
int main(){
    using namespace std;
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a:"<<a<<endl<<"b:"<<b;
    return 0;

}