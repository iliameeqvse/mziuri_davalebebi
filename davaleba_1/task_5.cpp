#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 3 digit number: ";
    cin >> number;
    int first_digit = number / 100;
    int second_digit = (number / 10) % 10;
    int third_digit = number % 10;
    cout << "First digit: " << first_digit << endl;
    cout << "Second digit: " << second_digit << endl;
    cout << "Third digit: " << third_digit << endl;
    cout << "Sum of digits: " << first_digit + second_digit + third_digit << endl;
}