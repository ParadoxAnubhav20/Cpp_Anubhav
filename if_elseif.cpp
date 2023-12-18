#include<iostream>
int main()
{
    int marks;
    std::cout<<"Enter Marks:";
    std::cin>>marks;
    if(marks>=80 && marks<=100){
        std::cout<<"Grade A";
    }
else if(marks>=60 && marks<=80){
    std::cout<<"Grade B";
}
else if(marks>=25 && marks<=60){
    std::cout<<"Grade C";
}
else{
    std::cout<<"Grade F";
}
return 0;
}