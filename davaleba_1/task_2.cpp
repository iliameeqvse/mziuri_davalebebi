#include <iostream>
using namespace std;

int main() {
    string name, city;
    int age;
    cout << "Name: " << name << endl;
    cin >> name;
    
    cout << "Age: " << age << endl;
    cin >> age;
    cout << "City: " << city << endl;
    cin >> city;
    cout << "in 10 years you will be:" << age + 10 << endl;
}