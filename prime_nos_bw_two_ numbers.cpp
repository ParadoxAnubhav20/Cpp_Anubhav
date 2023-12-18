#include<iostream>
bool isprime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
            return false;
        }
            return true;
}
int main(){
    int a=2,b=30;
    for(int j=a;j<=b;j++){
        if(isprime(j)){
            std::cout<<j<<" ";
        }
    }
    return 0;
}