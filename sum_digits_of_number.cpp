#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int sum=0;
    while(num>0){
       int digit=num%10;
        sum+=digit;
        num/=10;
    }
    std::cout<<sum;
    return 0;
}