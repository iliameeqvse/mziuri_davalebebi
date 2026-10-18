#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    int code = 0;
    if (a > b) code += 4;
    if (a > c) code += 2;
    if (b > c) code += 1;

    switch (code) {
        case 0:
            cout << a << " " << b << " " << c << endl;
            break;
        case 1:
            cout << a << " " << c << " " << b << endl;
            break;
        case 3:
            cout << c << " " << a << " " << b << endl;
            break;
        case 4:
            cout << b << " " << a << " " << c << endl;
            break;
        case 6:
            cout << b << " " << c << " " << a << endl;
            break;
        case 7:
            cout << c << " " << b << " " << a << endl;
            break;
    }
    return 0;
}