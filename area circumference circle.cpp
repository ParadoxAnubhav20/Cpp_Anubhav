#include<iostream>
float area(int r){
    return 3.14*r*r;
}
float circumference(int r){
    return 2*3.14*r;
}
int main(){
    int r;
    std::cout<<"Enter Radius:";
    std::cin>>r;
    std::cout<<area(r)<<" "<<circumference(r);
    return 0;
}