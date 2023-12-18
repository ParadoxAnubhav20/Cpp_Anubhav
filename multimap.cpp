#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> phoneNo;
    phoneNo.insert(make_pair("Anu",456));
    phoneNo.insert(make_pair("Debu",459602));
    phoneNo.insert(make_pair("Debu",4556));
    for(auto num:phoneNo){
        cout<<num.first<<" "<<num.second<<endl;
    }
    return 0;
}