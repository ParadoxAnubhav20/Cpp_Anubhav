#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the values of x and y:";
    cin>>x>>y;
    int *ptrx,*ptry;
    ptrx=&x;
    ptry=&y;
    int result=*ptrx+*ptry;
    cout<<result;
    return 0;
}