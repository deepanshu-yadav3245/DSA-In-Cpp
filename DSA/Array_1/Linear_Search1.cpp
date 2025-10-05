#include <iostream>
using namespace std;

int main() {
    int n, key;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> key;
    
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break; // first match milne par loop tod diya
        }
    }
    
    if (!found) {
        cout << "Element not found in array" << endl;
    }

    return 0;
}
