#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>& v){
    for(const int x:v){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> v;
    int value;
    while(value>=0){
        cin>>value;
        v.push_back(value);
    }
    print(v);
    return 0;
}