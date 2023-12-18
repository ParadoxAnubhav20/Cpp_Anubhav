#include<iostream>
int square(int a){
    return a;
}
int main(){
    for(int i=1;i<=5;i++){
        int sqr=square(i);
        sqr=i*i;
        std::cout<<"\n"<<sqr;
    }
    return 0;
}