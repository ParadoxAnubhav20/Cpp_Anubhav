#include<iostream>
int add(int ,int );
int main(){
    int num1,num2;
    std::cout<<"Enter the numbers:";
    std::cin>>num1>>num2;
    int sum=num1+num2;
    sum=add(num1,num2);
    std::cout<<"Sum:"<<sum;
    return 0;

}
int add(int a,int b){
    int result=a+b;
    return result;
}