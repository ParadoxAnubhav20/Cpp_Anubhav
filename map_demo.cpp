#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> my_map;
    int temp = 0; // initialize temp with 0
    string str;
    pair<int,string> p;
    cout<<"Inserting\n";
    while(temp>=0){
        cout<<"Enter Key:";
        getline(cin,str);
        temp=stoi(str);
        if(temp>=0){
            p.first=temp;
            cout<<"Enter Name:";
            getline(cin,str);
            p.second=str;
            my_map.insert(p);
        }
    }
    cout<<"Displaying Contents\n";
    for(auto it:my_map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    temp=0;
    cout<<"Removing Elements\n";
    while(temp>=0){
        cout<<"Enter Key:";
        getline(cin,str);
        temp=stoi(str);
        if(temp>=0){
            my_map.erase(temp);
        }
    }
    cout<<"Displaying Contents\n";
    for(auto it:my_map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0; // added a return statement
}
