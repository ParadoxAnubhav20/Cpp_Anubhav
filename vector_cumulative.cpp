#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector<int> v1(n,0);
    int q;
    cout<<"Enter the No of queries:";
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        v1[l]++;
        if(r+1<n){
            v1[r+1]--;
        }
    }
    //cumulative sum
    for(int i=1;i<n;i++){
        v1[i]+=v1[i-1];
    }
    for(auto i:v1){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}