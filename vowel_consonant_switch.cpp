#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Letter:";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        cout<<"Vowel";
        case 'e':
        cout<<"Vowel";
        case 'i':
        cout<<"Vowel";
        case 'o':
        cout<<"Vowel";
        case 'u':
        cout<<"Vowel";
        default:
        cout<<"Consonant";
    }
    return 0;
}