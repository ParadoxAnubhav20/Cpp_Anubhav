#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> nums;
    int temp;
    cout<<"Pushing Elements onto the Priority Queue:";
    while (temp>=0)
    {
        cin>>temp;
        if(temp>=0){
            nums.push(temp);
        }
    }
    cout<<"Displaying the Elements of the Priority Queue:";
    while(nums.size()!=0){
        cout<<nums.top()<<" ";
        nums.pop();
    }
    return 0;
}
