#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(int *arr, int size, int target){
    vector<int> v;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
   return {}; // Return an empty vector if no valid pair is found
}
int main(){
    int arr[5]={1,6,3,4,2};
    vector<int> indices = twosum(arr, 5, 10);
    for(int i=0; i<indices.size(); i++){
        cout << indices[i] << " ";
    }
    return 0;
}
