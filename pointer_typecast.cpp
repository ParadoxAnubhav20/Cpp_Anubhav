#include<iostream>
using namespace std;

int main()
{
    int a=1025;
    int *p;
    p=&a;
    cout<<"Size of Integer is "<<sizeof(int)<<endl;
    cout<<"Address is "<<p<<" and Value is "<<*p<<endl;

    char *p0;  //Pointer to a char
    p0=(char*)p; // Referencing the address
    cout<<"Size of char is "<<sizeof(char)<<endl;
    cout<<"Address is "<<(int*)p0<<" Value is "<<(int)*p0<<endl;  
    //Here, we'll have to type cast it back to integers.

    return 0;
}
