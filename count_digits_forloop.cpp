#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int digit=0;
    while(num>0){
        digit++;
        num=num/10;
    }
    std::cout<<digit;
    return 0;
}