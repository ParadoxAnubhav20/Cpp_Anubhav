#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string name,int age):name(name),age(age){};
    void show_details(){
        cout<<"Person Details\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Employee:public Person{
    private:
    int eid,sal;
    public:
    Employee(string name,int age,int eid,int sal):Person(name,age),eid(eid),sal(sal){ }
    void display(){
        cout<<"Employee Details"<<endl;
        Person::show_details();
        cout<<"Employee ID: "<<eid<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
};
class Manager:public Person{
    private:
    int mid,sal;
    public:
    Manager(string name,int age,int mid,int sal):Person(name,age),mid(mid),sal(sal){ }
    void display(){
        cout<<"Manager Details"<<endl;
        Person::show_details();
        cout<<"Manager ID: "<<mid<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
};
int main(){
    Person p("Avishek",21);
    p.show_details();
    Employee e("Souradeep",22,456,30000);
    e.display();
    Manager m("Sumit",24,123,50000);
    m.display();
    return 0;
}
