#include <iostream>
using namespace std;

int main() {
    double kwh, bill;
    cin >> kwh;
    if (kwh <= 100) {
        bill = kwh * 0.20;
    } else {
        bill = 100 * 0.20 + (kwh - 100) * 0.30;
    }
    cout << "Bill: " << bill << " GEL" << endl;
    return 0;
}