#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a != 0) {
        double x = -b / a;
        if (x == 0) x = 0; // avoid printing -0
        cout << "x = " << x << endl;
    } else if (b == 0) {
        cout << "Any x is a solution" << endl;
    } else {
        cout << "No solution" << endl;
    }
    return 0;
}