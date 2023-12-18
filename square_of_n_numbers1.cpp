#include<iostream>
int square(int a){
    return a*a;
}
int main(){
    for(int i=1;i<=5;i++){
        int sqr=square(i);
        std::cout<<"\n"<<sqr;
    }
    return 0;
}