#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,2,7,2,6,2,4,7};
    int size=sizeof(arr);
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i];
            break;
        }
    }
    return 0;
}