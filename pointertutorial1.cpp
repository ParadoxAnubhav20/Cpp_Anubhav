#include<iostream>
using namespace std;
int main(){
    int a=12;
    int *p;
    p=&a;
    cout<<"Address of a:"<<&a<<endl;
    cout<<"Address stored inside p:"<<p<<endl;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value present at Address stored at p:"<<*p<<endl;
    cout<<"Adress of p:"<<&p<<endl<<endl<<endl;
    *p=23;
    cout<<"Address of a:"<<&a<<endl;
    cout<<"Address stored inside p:"<<p<<endl;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value present at Address stored at p:"<<*p<<endl;
    cout<<"Adress of p:"<<&p<<endl;
}