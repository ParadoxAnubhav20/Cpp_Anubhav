#include<iostream>
#include<vector>
using namespace std;
void sortZeroesandOnes(vector <int> &v){
    int zeroes_count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            zeroes_count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroesandOnes(v);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    return 0;
}