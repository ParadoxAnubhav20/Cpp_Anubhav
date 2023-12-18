#include<iostream>
using namespace std;
//int count=0;
void name(int i,int n){
    if(i>n) return;
    cout<<"Anu"<<" ";
    name(i+1,n);
    //i++;
}
int main(){
    int n;
    cout<<"Enter Num:";
    cin>>n;
    name(1,n);
    return 0;
}