#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    cout<<"Size of the set is:"<<s.size()<<endl;
    s.insert(3); //won't insert because 3 already exists as set consists only unique
    cout<<"Size of the set is:"<<s.size()<<endl;
        // set<int>::iterator itr;
        // for(itr=s.begin();itr!=s.end();itr++){
        //     cout<<*itr<<" ";
        // }
    int n;
    cout<<"Enter the No of elements to be Inserted:";
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        s.insert(num);
    }
    for(auto i:s){
        cout<<i<<" ";
    }cout<<"\n";
    cout << "Upper and Lower Bound Functions\n";
    auto lower = s.lower_bound(5);
    auto upper = s.upper_bound(5);
    cout << "Lower: ";
    if (lower != s.end()) {
        cout << *lower;
    }
    cout << endl;
    cout << "Upper: ";
    if (upper != s.end()) {
        cout << *upper;
    }
    cout << endl;
    //Deletion Opertations
    // s.erase(5);
    // set<int>::iterator itr=s.begin(); //also use auto itr=s.begin();
    // advance(itr,3);    //moving the iterator by 3 positions
    // s.erase(itr);
    auto start_itr=s.begin();
    start_itr++;
    auto end_itr=s.begin();
    advance(end_itr,3);
    s.erase(start_itr,end_itr); //end position is excluded
    cout<<"After Deletion\n";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<"\n";
    if(s.find(5)!=s.end()){
        cout<<"Element is Present\n";
    }
    else{
        cout<<"Element is not Present\n";
    }
    return 0;
}
