#include<iostream>
int main(){
    int num;
    std::cout<<"Enter Number:";
    std::cin>>num;
    int sum=0;
    for(int i=0;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
        else
        {
            continue;
        }
    }
    std::cout<<sum;
    return 0;
}