#include<iostream>
#include<conio.h>
using namespace std;
class test{
    private:
    int a,b;
    public:
    void show(){
        cout<<"This Address:"<<this<<endl;
        cout<<this->a<<" "<<this->b<<endl;
    }
};
int main(){
    test t;
    t.show();
}