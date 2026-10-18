#include <iostream>
using namespace std;

int main() {
    double t;
    cin >> t;
    if (t <= 0) {
        cout << "Ice" << endl;
    } else if (t < 100) {
        cout << "Water" << endl;
    } else {
        cout << "Steam" << endl;
    }
    return 0;
}