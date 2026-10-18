#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "First is larger" << endl;
    } else if (b > a) {
        cout << "Second is larger" << endl;
    } else {
        cout << "Equal" << endl;
    }
    return 0;
}