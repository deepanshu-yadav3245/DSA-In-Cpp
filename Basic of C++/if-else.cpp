//  Find the character lower case and uppercase.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "Lowercase\n";
    }else {
        cout << "UpperCase";
    }
    return 0;
}