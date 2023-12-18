#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    //set doesn't accept duplicates
    set<int> s;
    int temp;
    cout<<"Entering Elements\n";
    while(temp>=0){
        cout<<"Inserting:";
        cin>>temp;
        if(temp>=0){
            s.insert(temp);
        }
    }
    for(auto it:s){
        cout<<it<<" ";
        cout<<endl;
    }
    temp=0;
    cout<<"Removing\n";
    while(temp>=0){
        cout<<"Enter the Element to be removed:";
        cin>>temp;
        if(temp>=0){
            s.erase(temp);
        }
    }
    for(auto it:s){
        cout<<it<<" ";
    }
    return 0;
}