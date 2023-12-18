#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter cp:";
    cin>>cp;
    cout<<"Enter sp:";
    cin>>sp;
    if(cp>sp){
        cout<<"Loss:"<<cp-sp;
    }
    else
    {
    cout<<"Profit:"<<sp-cp;
    }
    return 0;
}