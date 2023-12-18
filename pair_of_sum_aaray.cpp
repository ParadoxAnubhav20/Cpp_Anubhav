#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,9,10,14};
    int targetsum=14;
    int size=sizeof(arr);
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs;
    return 0;
}