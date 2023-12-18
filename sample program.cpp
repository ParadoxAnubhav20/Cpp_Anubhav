#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>& v , int element){
    for(int i=0;i<v.size();i++){
        if(v[i]==element){
            return element;
        }
    }
    return -1;
}
void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int size;
    int target;
    cout<<"Enter Target Element:";
    cin>>target;
    cout<<"Enter Size of Vector:";
    vector<int> arr;
    cout<<"Enter The Elements:";
    while(size--){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    display(arr);
    cout<<"Element is Found At:"<<linearSearch(arr,target);
    return 0;
}