#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //zad 5
    // int n;
    // cout << "Enter size (n): ";
    // cin >> n;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         int x = i;
    //         if (j < x) x = j;
    //         if (n - 1 - i < x) x = n - 1 - i;
    //         if (n - 1 - j < x) x = n - 1 - j;

    //         cout << x + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // //zad 7
    // int number;
    // cout<< "Enter a number: ";
    // cin >> number;
    // int original_number = number;
    // int number_length = to_string(number).length();
    // int new_number = 0;
    // for(int i = 1; i <= number_length; i++) {
    //     new_number += (number % 10) * pow(10, number_length - i);
    //     number /= 10;

    // }
    // cout << new_number << endl;
    // if(original_number == new_number) {
    //     cout << "The number is a palindrome." << endl;
    // } else {
    //     cout << "The number is not a palindrome." << endl;
    // }
   
    //zad 8
    // int a, b;
    // cout<<"Enter a: ";
    // cin >> a;
    // cout<<"Enter b: ";
    // cin >> b;
    // for (int n = a; n <= b; n++) {
    //     bool pierwsza = true;

    //      for (int i = 2; i <= sqrt(n); i++) {
    //         if (n % i == 0) {
    //             pierwsza = false;
    //             break;
    //         }
    //     }

    //     if (pierwsza)
    //         cout << n << " ";
    // }

    //zad 9
    // int left = 1;
    // int right = 100;
    // int answer;
    // int counter = 0;
    // while (left <= right) {
    //     int middle = (left + right) / 2;

    //     cout << "Is your number " << middle << "?" << endl;
    //     cout << "1 - too large" << endl;
    //     cout << "2 - too small" << endl;
    //     cout << "3 - correct" << endl;
    //     cin >> answer;
    //     counter++;
    //     if (answer == 3) {
    //         cout << "I guessed it!" << endl;
    //         cout << "Number of attempts: " << counter << endl;
    //         break;
    //     }
    //     else if (answer == 1) {
    //         right = middle - 1;
    //     }
    //     else if (answer == 2) {
    //         left = middle + 1;
    //     }
    // }

}