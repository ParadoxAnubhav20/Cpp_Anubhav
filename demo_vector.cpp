#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> arr={6,2,9,12,14,16};
    //fill constructor fills with same values
    vector<int> arr(15,12);
    //inserts element at the end
    arr.push_back(19);
    //removes element from the end
    arr.pop_back();
    cout<<"Size of the Vector:"<<arr.size()<<"\n";
    cout<<"Capacity of the Vector:"<<arr.capacity()<<"\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}