#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int rev=0;
    while(num>0){
       int ldigit=num%10;
        rev=rev*10+ldigit;
        num/=10;
    
    }
    std::cout<<rev;
    return 0;
}