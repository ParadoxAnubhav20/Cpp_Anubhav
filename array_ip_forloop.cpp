#include<iostream>
int main(){
    char vowel[5];
    for(int i=0;i<5;i++){
        std::cin>>vowel[i];
    }
    for(int i=0;i<5;i++){
        std::cout<<vowel[i]<<" ";
    }
    return 0;
}