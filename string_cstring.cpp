#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100] = "Batman";
    char b[100];
    cout << "Length of a: " << strlen(a) << "\n";
    cout << sizeof(a) << "\n";
    strcpy(b, a);
    cout << b << "\n";
    cout << strcmp(a, b) << "\n";
    char f[] = "Catwoman";
    char g[] = " is Bombshell";
    //cout<<strcat(c,d)<<"\n";
    strcpy(a, strcat(f, g));
    cout<<"b:"<< b << "\n"; // print contents of b after the strcpy operation
    cout<<"a:"<< a << "\n";
    cout << strcmp(b,a) << "\n";
    return 0;
}
