#include<iostream>
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    std::cout<<"Enter the numbers:";
    std::cin>>a>>b;
    std::cout<<"Before Swapping"<<"\n"<<"a:"<<a<<"\n"<<"b:"<<b<<"\n";
    swap(a,b);
    std::cout<<"After Swapping"<<"\n"<<"a:"<<a<<"\n"<<"b:"<<b<<"\n";
    return 0;
}