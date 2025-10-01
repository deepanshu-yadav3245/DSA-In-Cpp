// Check if a number is prime or not (prime no:- jo 1 se aur khud se divisibale ho)
#include <iostream>
using namespace std;

int main() {
    int n = 6;
    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << "Prime no\n";
    } else {
        cout << "Non-Prime no\n";
    }

    return 0;
}
