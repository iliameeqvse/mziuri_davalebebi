#include <iostream>
using namespace std;

int main() {
    float kilometers;
    int start_fee = 2;
    float cost_per_km = 0.9;
    cout << "how many kilometers did you travel?: ";
    cin >> kilometers;
    float total_cost = start_fee + (kilometers * cost_per_km);
    cout << "Total cost of the trip: " << total_cost << endl;
}