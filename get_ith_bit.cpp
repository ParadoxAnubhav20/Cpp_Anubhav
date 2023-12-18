#include<iostream>
using namespace std;
int ithBit(int n,int i){
    int bitmask=(1<<i);
    if((n&bitmask)==0){
        return 0;
    }
    else{
        return 1;
    }
}
int setithBit(int n,int i){
    int bitmask=(1<<i);
    return n | bitmask;
}
int main(){
    int n;
    cout<<"Enter Num:";
    cin>>n;
    cout<<ithBit(n,3)<<endl;
    cout<<setithBit(n,2)<<endl;
    return 0;
}