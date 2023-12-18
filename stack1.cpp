#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> nums;
    int temp;
    cout<<"Pushing Elements onto the stack:";
    while (temp>=0)
    {
        cin>>temp;
        if(temp>=0){
            nums.push(temp);
        }
    }
    cout<<"Displaying the Elements of the stack:";
    while(nums.size()!=0){
        cout<<nums.top()<<" ";
        nums.pop();
    }
    return 0;
}
