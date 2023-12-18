#include<iostream>
int main(){
    int rows,col;
    std::cout<<"Enter the no of rows and columns:";
    std::cin>>rows>>col;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            if((i+j)%2==0){
        std::cout<<"1";
            }
            else{
                std::cout<<"2";
            }
    }
    std::cout<<'\n';
}
    return 0;
}