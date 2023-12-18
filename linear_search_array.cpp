#include<iostream>
int main(){
    int arr[]={5,9,90,23,91};
    int key;
    std::cout<<"Enter the element to find:";
    std::cin>>key;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            ans=i;
            break;
    }
    }
    std::cout<<ans;
    return 0;
}