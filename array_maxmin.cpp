#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[100];
    //taking input
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=arr[0];
        for(int i=0;i<size;i++){
            if (arr[i]>max){
                max=arr[i];
        }
    }
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum element in array:"<<min<<endl;
    cout<<"Maximum element in array:"<<max<<endl;
    return 0;
}