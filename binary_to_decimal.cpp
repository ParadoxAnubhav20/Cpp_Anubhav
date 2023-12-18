#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int ans=0;
    int power=1;
    while(num>0){
        int digit=num%10;
        ans+=digit*power;
        power*=2;
        num=num/10;
    }
    std::cout<<"Converted Number is:"<<ans;
    return 0;
}