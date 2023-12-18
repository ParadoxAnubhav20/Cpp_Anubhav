#include<iostream>
int add(int a,int b){
    int result=a+b;
    return result;
}
int main(){
    int num1,num2;
    std::cout<<"Enter the numbers:";
    std::cin>>num1>>num2;
    int sum=add(num1,num2);
    std::cout<<"Sum:"<<sum;
    return 0;

}