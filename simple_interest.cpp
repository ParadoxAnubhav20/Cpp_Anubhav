#include<iostream>
using namespace std;
float simpleInterest(float bal, float rate, float time) {
    return (bal * rate * time) / 100;
}
int main() {
    float balance;
    float rate;
    float time;
    cout << "Enter the balance to be deposited: ";
    cin >> balance;
    cout << "Current Balance: " << balance << "\n";
    cout << "Enter rate of interest and time: ";
    cin >> rate >> time;
    float interest = simpleInterest(balance, rate, time);
    cout << "Total Interest: " << interest << "\n";
    float updatedBalance = balance + interest;
    cout << "Total Updated Balance: " << updatedBalance << "\n";
    return 0;
}
