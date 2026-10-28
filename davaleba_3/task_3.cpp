#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}