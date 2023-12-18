#include<iostream>
#include<vector>
using namespace std;
int max_element(vector<int>& v){
    int max=v[0];
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    return max;
}
int main(){
    vector<int> v={4,3,1,5,7,1,10,23,25,16};
    cout<<"Max element is:"<<max_element(v)<<endl;
    return 0;
}