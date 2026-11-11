#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output:\n";
    for (int i = 1; i <= n; i++) {
        // Print n - i spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print i stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}