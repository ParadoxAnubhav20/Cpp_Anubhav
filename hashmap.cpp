#include<iostream>
#include<unordered_map>
using namespace std;
int max_element(unordered_map<int,int>& m){
    int max=0;
    for(auto i:m){
        if(max<i.second){
            max=i.second;
        }
    }
    return max;
}
int main(){
    unordered_map<int,int> m={{1,4},{2,3},{3,1},{4,5},{5,7},{6,1},{7,10},{8,23},{9,25},{10,16}};
    cout<<"Max element is:"<<max_element(m)<<endl;
    return 0;
}