#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int largest = 0;
    int second_largest = 0;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num > largest) {
            second_largest = largest;
            largest = num;
        } else if (num > second_largest) {
            second_largest = num;
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << second_largest << endl;

    return 0;
}