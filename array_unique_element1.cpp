#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,3,7,4,7,6};
    int ans=0;
    for(int i=0;i<6;i++){
        ans=ans^arr[i];
        }
    for(int i=1;i<6;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}