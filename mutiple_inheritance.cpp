#include<iostream>
using namespace std;

class A {
protected:
    int value;
public:
    A(int a) {
        cout << "Constructor of A\n";
        value = a;
    }

    void show() {
        cout << "Value of A: " << value << endl;
    }
};

class B {
protected:
    int price;
public:
    B(int p) {
        cout << "Constructor of B\n";
        price = p;
    }

    void display() {
        cout << "Value Of B: " << price << endl;
    }
};

class C : public A, public B {
private:
    int no;

public:
    C(int n, int a, int b) : A(a), B(b) {
        cout << "Constructor of C\n";
        no = n;
    }

    void dis() {
        cout << "Value of C: " << no << endl;
    }

    void showAllValues() {
        A::show();
        B::display();
        dis();
    }
};

int main() {
    A objA(5);
    objA.show();

    B objB(6);
    objB.display();

    C objC(1, 2, 3);
    objC.dis();
    objC.showAllValues();

    return 0;
}
