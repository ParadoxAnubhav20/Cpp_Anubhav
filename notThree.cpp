#include<bits/stdc++.h>
using namespace std;
bool containsThree(int n){
    while(n!=0){
        if(n%10==3){
            return true;
        }
        n/=10;
    }
    return false;
}
int notThree(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(!containsThree(i)){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    cout<<"Total Count of Numbers without 3:"<<notThree(n)<<endl;
    return 0;
}