#include <iostream>

using namespace std;

int counter = 0; //global variable

int digitcount(int n); //prototype

int main() {
    int number1;

    cout << "input a number: ";
    cin >> number1;
    cout << digitcount(number1);

    return 0;
}

/**
* There is a known issue in this recursive function that I intend to fix tomorrow, 3/29/2025.
* When "int n" is greater than 10, it will always return a value of 10 regardless if the value is 10 or 100 or more.
*/
int digitcount(int n) {
    if(n == 0) { return 1; } //base case

    counter++;
    if(n > 1) {
        digitcount(n / 10);
    }

    return counter; //returns the number of digits within a given number.
}
