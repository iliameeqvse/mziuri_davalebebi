#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int divisor_sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            divisor_sum += i;
        }
    }

    if (divisor_sum == n && n > 0) {
        cout << n << " is perfect" << endl;
    } else {
        cout << n << " is not perfect" << endl;
    }

    return 0;
}