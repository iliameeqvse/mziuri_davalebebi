
#include <iostream>
using namespace std;

int main() {
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter a digit to count: ";
    cin >> digit;

    int count = 0;
    long long temp = number;

    if (temp == 0) {
        count = (digit == 0) ? 1 : 0;
    } else {
        if (temp < 0) temp = -temp;

        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }
    }

    cout << "The digit " << digit << " appears "
         << count << " times in the number "
         << number << endl;

    return 0;
}

