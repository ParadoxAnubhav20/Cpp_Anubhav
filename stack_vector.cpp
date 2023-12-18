#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class Stack{
    private:
    vector<T> arr;
    public:
    void push(int data){
        arr.push_back(data);
    }
    void pop(){
        arr.pop_back();
    }
    T top(){
        int last_idx=arr.size()-1;
        return arr[last_idx];
    }
    bool empty(){
        return arr.size()==0;
    }
};
int main(){
    Stack<int> st;
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(30);
    st.push(50);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
