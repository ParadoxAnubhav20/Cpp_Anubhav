#include<iostream>
int main(){
    int rows,cols;
    std::cout<<"Enter the no of rows and columns:";
    std::cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || j==1 || i==rows || j==cols ){
        std::cout<<"*";
        }
        else{
        std::cout<<" ";
        }
        }
        std::cout<<'\n';
}
return 0;
}