#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    int age = 22;
    string name = "Anubhav";
    char section = 'B';
    int rollNo = 235;
    cout << "Age: " << typeid(age).name() << ", Size: " << sizeof(age) << " bytes" << endl;
    cout << "Name: " << typeid(name).name() << ", Size: " << sizeof(name) << " bytes" << endl;
    cout << "Section: " << typeid(section).name() << ", Size: " << sizeof(section) << " byte" << endl;
    cout << "Roll No: " << typeid(rollNo).name() << ", Size: " << sizeof(rollNo) << " bytes" << endl;
    return 0;
}
