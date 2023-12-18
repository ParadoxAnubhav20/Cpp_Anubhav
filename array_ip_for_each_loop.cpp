#include<iostream>
int main(){
    char vowel[5];
    for(char &ele:vowel){
        std::cin>>ele;
    }
    for(int i=0;i<5;i++){
        std::cout<<vowel[i]<<" ";
    }
    return 0;
}