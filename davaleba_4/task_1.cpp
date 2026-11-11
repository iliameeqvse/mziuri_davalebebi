#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Input: ";
    cin >> num;

    if (num == 0) {
        cout << "Output:\nNo numbers" << endl;
        return 0;
    }

    int count = 0;
    long long sum = 0;
    int largest = num;
    int smallest = num;

    while (num != 0) {
        count++;
        sum += num;
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
        cin >> num;
    }

    double average = static_cast<double>(sum) / count;

    cout << "Output:\n";
    cout << "Count: " << count << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average << "\n";
    cout << "Largest: " << largest << "\n";
    cout << "Smallest: " << smallest << endl;

    return 0;
}