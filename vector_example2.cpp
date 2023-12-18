#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>& v){
    for(const int x:v){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> v;
    int value = 0;
    cout<<"Enter the Element to be Inserted At Front:";
    while (value>=0) {
    cin >> value;
    if (value < 0) {
        break;
    }
    v.insert(v.begin(), value);
}
int index=0;
value=0;
cout<<"Entering At Specific Postion"<<endl;
while(index>=0){
    cout<<"Enter Index:";
    cin>>index;
    if(index>=0){
        cout<<"Enter Value:";
        cin>>value;
        v.insert(v.begin(),value);
    }
}
    print(v);
    return 0;
}