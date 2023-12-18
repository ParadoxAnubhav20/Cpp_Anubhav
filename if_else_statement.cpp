#include<iostream>
int main()
{
    int marks;
    std::cout<<"Enter Marks:";
    std::cin>>marks;
    if(marks>=25){
        std::cout<<"Passed";
    }
    else
    {
        std::cout<<"Failed";
    }
    return 0;
}