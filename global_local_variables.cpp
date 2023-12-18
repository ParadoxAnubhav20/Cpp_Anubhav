#include<iostream>
int age=69;//global
void fun(){
    std::cout<<age<<"\n";
}
int main(){
    std::cout<<age<<"\n";
    age=47;
    fun();
    return 0;
}