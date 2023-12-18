#include<iostream>
int main(){
    int rows,col;
    std::cout<<"Enter the no of rows and columns:";
    std::cin>>rows>>col;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
        std::cout<<j;
    }
    std::cout<<'\n';
}
    return 0;
}