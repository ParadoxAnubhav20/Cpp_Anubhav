#include<iostream>
void func(int x,int y=34, int z=69){
    std::cout<<x<<" "<<y<<" "<<z;
}
int main(){
    func(10,20);
}