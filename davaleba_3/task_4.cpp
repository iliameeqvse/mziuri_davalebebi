#include <iostream>

using namespace std;

int main() {
    int count;
    cin >> count;

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < count; ++i) {
        int num;
        cin >> num;
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;

    return 0;
}