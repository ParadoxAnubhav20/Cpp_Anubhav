#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> us;
    int n;
    cout<<"Enter the Size:";
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        us.insert(num);
    }
    for(auto i:us){
        cout<<i<<" ";
    }
    return 0;
}