#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a % b == 0) {
        cout << a << " is divisible by " << b << ", result: " << a / b << endl;
    } else {
        cout << a << " is not divisible by " << b << ", remainder: " << a % b << endl;
    }
    return 0;
}