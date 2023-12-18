#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr={{2,3,4,1},
    {2,4,5},{1,6,7,8},{9,1,2,4}};
    arr[0][1]=69;
    for(int i=0;i<arr.size();i++){
        for(int j:arr[i]){
            cout<<j<<",";
        }
        cout<<"\n";
    }
    return 0;
}