#include <iostream>

using namespace std;

int main() {
      cout << "palindrome" << endl;
      int n;
      cout << "Enter a number to check all palindromes from 1 to that number: ";
      cin >> n;
      for (int i = 1; i <= n; i++) {
         int original = i;
         int reversed = 0;
         int temp = i;
         while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
         }
         if (original == reversed) {
            cout << original << " is a palindrome." << endl;
         }
      }
      return 0;
   }
