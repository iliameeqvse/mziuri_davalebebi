#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    int failed = 0;

    for (int i = 0; i < n; ++i) {
        double score;
        cin >> score;
        sum += score;
        if (score < 51) {
            failed++;
        }
    }

    double average = (n > 0) ? (sum / n) : 0;

    cout << "Average: " << average << endl;
    cout << "Failed: " << failed << endl;

    return 0;
}