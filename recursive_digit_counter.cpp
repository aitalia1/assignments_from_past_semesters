#include <iostream>

using namespace std;

int digitcount(long long n); //prototype

int main() {
    long long number1;

    cout << "input a number: ";
    cin >> number1;
    cout << digitcount(number1);

    return 0;
}

/**
 * The issue that caused the output of a number with a digit count greater than 10 to output 10
 * was the fact that the int data type is not large enough to handle a number of that size. It caps at 10.
 * The issue was with the data type, not the implementation as I had expected. 4/25/2025
 *
 * This program is used by inputing a number, the recursive function digitcount divides that number by ten until it reaches the end.
 * The end being how many digits are in the given number provided by the user.
 */

int digitcount(long long n) {
    if(n == 0) { return 1; } //base case
    
    return 1 + digitcount(n / 10); //returns the number of digits within a given number.
}
