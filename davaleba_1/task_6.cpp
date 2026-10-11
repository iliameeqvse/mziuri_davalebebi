#include <iostream>
using namespace std;

int main() {
    int lari_100 = 100;
    int lari_50 = 50;
    int lari_20 = 20;
    int lari_10 = 10;
    int lari_5 = 5;
    int lari_1 = 1;
    int ATM_amount;
    cout << "Enter the amount you want to withdraw: ";
    cin >> ATM_amount;
    cout << "You will receive: " << endl;
    cout << "100 lari bills: " << ATM_amount / lari_100 << endl;
    ATM_amount %= lari_100;
    cout << "50 lari bills: " << ATM_amount / lari_50 << endl;
    ATM_amount %= lari_50;
    cout << "20 lari bills: " << ATM_amount / lari_20 << endl;
    ATM_amount %= lari_20;
    cout << "10 lari bills: " << ATM_amount / lari_10 << endl;
    ATM_amount %= lari_10;
    cout << "5 lari bills: " << ATM_amount / lari_5 << endl;
    ATM_amount %= lari_5;
    cout << "1 lari bills: " << ATM_amount / lari_1  << endl;
}