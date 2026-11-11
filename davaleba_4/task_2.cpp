#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    int temp = n;
    int count = 0;
    int sum = 0;
    int largest_digit = 0;

    int prev_digit = -1;
    bool goes_up = true;

    while (temp > 0) {
        int current_digit = temp % 10;
        count++;
        sum += current_digit;

        if (current_digit > largest_digit) {
            largest_digit = current_digit;
        }

        if (prev_digit != -1) {
           
            if (current_digit >= prev_digit) {
                goes_up = false;
            }
        }

        prev_digit = current_digit;
        temp /= 10;
    }

    cout << "Output:\n";
    cout << "Digits: " << count << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Largest digit: " << largest_digit << "\n";
    if (goes_up) {
        cout << "Digits go up" << endl;
    } else {
        cout << "Digits do not go up" << endl;
    }

    return 0;
}