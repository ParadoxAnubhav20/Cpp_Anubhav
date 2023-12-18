#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    cout<<"Entering Elements at the back\n";
    int temp=0;
    while(temp>=0){
        cout<<"Enter Elements:";
         cin>>temp;
         if(temp>=0)
         d.push_back(temp);
    }
    deque<int>::iterator it;
    for(it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    temp=0;
    cout<<"Entering Elements at the Front\n";
    while(temp>=0){
        cout<<"Enter Elements:";
        cin>>temp;
        if(temp>=0)
        d.push_front(temp);
    }
    for(it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}