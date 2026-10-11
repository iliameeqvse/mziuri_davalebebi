#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter the width and length of a rectangle: ";
    cin >> a >> b;
    float area = a * b;
    float perimeter = 2 * (a + b);
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;
}