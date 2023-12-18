#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(int x){
        a=x;
    }
    void show(){
        cout<<"Value of a:"<<a<<endl;
    }
};
class B:public A{
    private:
    int b;
    public:
    B(int y,int x):A(y){
        b=x;
    }
    void show(){
        A::show();
        cout<<"Value of B:"<<b<<endl;
    }
};
int main(){
    A a(2);
    B b(5,7);
    a.show();
    b.show();
    return 0;
}