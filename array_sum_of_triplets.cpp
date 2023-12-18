#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,8,6};
    int targetsum=12;
    int size=sizeof(arr);
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
        for(int k=j+1;j<size;j++){
            if((arr[i]+arr[j]+arr[k])==targetsum){
                pairs++;
             }
                }
        }
    }
    cout<<pairs;
    return 0;
}