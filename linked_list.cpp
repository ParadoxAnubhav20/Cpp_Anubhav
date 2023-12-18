#include<iostream>
#include"list.h"
using namespace std;
int main(){
    List l;
    l.push_front(1);
    l.push_back(2);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    // l.push_back(13);
    // l.push_front(11);
    //printing
    l.insert(5,5);
    l.insert(69,0);
    Node* Head=l.begin();
    while(Head!=NULL){
        cout<<Head->get_data()<<"->";
        Head=Head->next;
    }
    cout<<endl;
    int key;
    cout<<"Enter key:";
    cin>>key;
    cout<<"Element found at Index:"<<l.search(key)<<endl;
    cout<<"Recursive Search Index:"<<l.recursive_search(4)<<endl;
    return 0;
}
