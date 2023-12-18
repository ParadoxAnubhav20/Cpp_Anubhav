#include<iostream>
using namespace std;
void subarray(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
             cout<<"\n";
        }
         cout<<"\n";
    }
}
int main(){
    int arr[6]={2,6,1,8,9,5};
    subarray(arr,6);
    return 0;
}