#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
        return 1;
    }
    }
    return 0;
}
int main(){
    int arr[10]={-3,4,8,0,9,8,2,-6,23,20};
    int key;
    cout<<"Enter the element to find:";
    cin>>key;
    bool found=search(arr,10,key);
        if(found){
            cout<<"Present";
        }
        else
        {
            cout<<"Not Present";
        }
    return 0;
}