#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Default Constuctor of Base\n";
    }
    base(int x){
        cout<<"Parameterised Consrtuctor of Base "<<x<<"\n";
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"Default of Derived\n";
    }
    derived(int y){
        cout<<"Parmeterised Constructof of Derived "<<y<<"\n";
    }
    derived(int x,int y):base(x){
        cout<<"Parmeterised Construtor of Deriveed(also calls base class param consrtuctor) "<<y<<endl;
    }
};
int main(){
    derived d1;
    derived d2(5);
    derived d3(69,420);
    return 0;
}