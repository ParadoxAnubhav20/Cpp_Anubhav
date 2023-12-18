#include<iostream>
bool isodd(int num){
    if(num%2!=0){
        //num is odd
        return true;
    }
    else{
        return false;
    }
}
    int main(){
        int a=2,b=34;
        for(int i=a;i<=b;i++){
            if(isodd(i)){
                std::cout<<i<<" ";
            }
        }
        return 0;
    }
