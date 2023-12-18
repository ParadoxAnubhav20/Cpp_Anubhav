#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c;
    c=cin.get();
    int digit=0,letter=0,spaces=0;
    while(c!='\n'){
        //comparing with ASCII valeues of 0 to 1 because cin.get() reads input one at a time
        if(c>='0' and c<='9'){
            digit++;
        }
        else if((c>='a' and c<='z') || (c>='A' and c<='Z')){
            letter++;
        }
        else if(c==' '){
            spaces++;
        }
        //reads next character
        c=cin.get();
    }
    cout<<"Letters:"<<letter<<" Digit:"<<digit<<" Spaces:"<<spaces;
    return 0;
}