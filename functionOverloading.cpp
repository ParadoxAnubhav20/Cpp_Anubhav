#include<iostream>
using namespace std;
// Overloads for func with different parameter types
int func(int n){
    return n;
}
string func(string s){
    return s;
}
float func(float f){
    return f;
}
int func(int i, int j){
    return i + j;
}
string func(string s1, string s2){
    return s1 + s2;
}
char func(char c){
    return c;
}
int main(){
    cout << func(5) << endl;
    // You can use explicit type casting to resolve the ambiguity
    cout << func(string("Bat"), string("man")) << endl;
    cout << func(string("Wonder Woman")) << endl;
    cout << func(4.2f) << endl;
    cout << func(5, 3) << endl;
    return 0;
}
