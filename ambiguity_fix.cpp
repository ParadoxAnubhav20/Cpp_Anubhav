#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"Print Member function of A\n";
    }
};
class B{
    public:
    void print(){
        cout<<"Print Member function of B\n";
    }
};
class C:public A,public B{
    public:
    void disp(){
        cout<<"Print Member Function of C\n";
    }
};
int main(){
    C obj;
    obj.A::print();
    obj.B::print();
    obj.disp();
    return 0;
}