#include<iostream>
using namespace std;
int area(int l,int b){
    cout<<"This is a rectangle\n";
    cout<<"Length:"<<l<<" Breadth:"<<b<<"\n";
    cout<<"Area:";
    return l*b;
}
int area(int l){
    cout<<"This is a Square\n";
    cout<<"Length:"<<l<<"\n";
    cout<<"Area:";
    return l*l;
}
int main(){
    cout<<area(5)<<"\n";
    cout<<"\n";
    cout<<area(2,7)<<"\n";
    return 0;
}