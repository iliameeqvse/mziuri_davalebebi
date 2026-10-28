#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double total = 0;
    for (int i = 0; i < n; ++i) {
        double price;
        cin >> price;
        total += price;
    }

    double to_pay = total;
    if (total > 100) {
        to_pay = total * 0.9;
    }

    cout << "Total: " << total << endl;
    cout << "To pay: " << to_pay << endl;

    return 0;
}