#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v={2,1,4,5,6};
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}