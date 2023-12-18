#include<iostream>
using namespace std;
class SuperClass { // class SuperClass.
public:
    SuperClass() { cout << "SuperClass called" << endl; } 
    // Base constructor.
    SuperClass(int x) { cout << "SuperClass called" << endl; }
};
class ClassA : virtual public SuperClass { // class ClassA inherits SuperClass.
public:
    // Parameterized constructor.
    ClassA(int x):SuperClass(x)   { 
       cout << "ClassA called" << endl;
    }
};
class ClassB : virtual public SuperClass { // class ClassB inherits SuperClass.
public:
    ClassB(int x):SuperClass(x) {
        cout << "ClassB called" << endl;
    }
};
class ClassC : public ClassA, public ClassB  { // class ClassC inherits ClassA and ClassB.
public:
    ClassC(int x):ClassB(x), ClassA(x) {
        cout << "ClassC called" << endl;
    }
};
int main()  {
    ClassC ClassC(30);
}
