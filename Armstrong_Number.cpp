#include<iostream>
#include<cmath>
using namespace std;
bool checkArmstrong(int n){
    int temp = n;
    int arm_number = 0;
    while (n != 0){
        int ld = n % 10;
        arm_number += pow(ld, 3);
        n /= 10;
    }
    return temp == arm_number;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (checkArmstrong(num)){
        cout << num << " is an Armstrong number." << endl;
    }
    else{
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
