#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int> &arr){
    int s=0,e=arr.size()-1;
    int temp;
    while(s<e){
        temp=arr[s];
        arr[s++]=arr[e];
        arr[e--]=temp;
    }
}
int main(){
    int brr[6]={2,4,5,6,7,8};
    vector<int> v(brr,brr+6);
    swap(v);
    for(int i=0;i<6;i++){
        cout<<v[i]<<" ";
    }
return 0;
}