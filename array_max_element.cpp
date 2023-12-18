#include<iostream>
int main(){
    int arr[]={5,9,90,23,91};
    int max=arr[0];
        for(int i=0;i<5;i++){
            if (arr[i]>max){
                max=arr[i];
        }
    }
    std::cout<<max;
    return 0;
}