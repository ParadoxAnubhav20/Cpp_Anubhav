#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> nums;
    int temp;
    cout<<"Pushing Elements onto the Queue:";
    while (temp>=0)
    {
        cin>>temp;
        if(temp>=0){
            nums.push(temp);
        }
    }
    cout<<"Displaying the Elements of the Queue:";
    while(nums.size()!=0){
        cout<<nums.front()<<" ";
        nums.pop();
    }
    return 0;
}
