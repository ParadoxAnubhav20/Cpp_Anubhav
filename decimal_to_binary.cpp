#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int ans=0;
    int power=1;
    while(num>0){
        int ldigit=num%2;
        ans+=ldigit*power;
        power*=10;
        num=num/2;
    }
    std::cout<<"Converted Number is:"<<ans;
    return 0;
}