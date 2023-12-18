#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int fac=1;
    for(int i=1;i<=num;i++){
    fac*=i;}
    std::cout<<fac;
    return 0;
}