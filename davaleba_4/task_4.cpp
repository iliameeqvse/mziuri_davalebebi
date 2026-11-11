#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "# ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }

    return 0;
}