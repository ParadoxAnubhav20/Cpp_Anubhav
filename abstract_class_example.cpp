#include <iostream>
using namespace std;
class Base {
protected:
    int data;
public:
    Base(int d) {
        this->data = d;
        cout << "Base constructor called with data: " << data << endl;
    }
    // Pure virtual function with an empty implementation
    virtual void print() = 0;
    virtual ~Base() {
        cout << "Base destructor called with data: " << data << endl;
    }
};
class Derived : public Base {
private:
    int derivedData;
public:
    Derived(int a, int b) : Base(a), derivedData(b) {
        cout << "Derived constructor called with data: " << data << ", derivedData: " << derivedData << endl;
    }
    void print() {
        cout << "Derived print() called with data: " << data << ", derivedData: " << derivedData << endl;
    }
    ~Derived() {
        cout << "Derived destructor called with data: " << data << ", derivedData: " << derivedData << endl;
    }
};
int main() {
    Base* b = new Derived(5, 10);
    b->print();
    delete b; //  delete dynamically allocated memory
    return 0;
}
