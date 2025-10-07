// Taking Input in Array.

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];
//     int n = 5;

//     // Taking Input In Array
//     for(int i = 0; i < n; i++){
//         cout << "Enter the value of index " << i << ": " ;
//         cin >> arr[i];
//         cout << endl;

//     }

//     // Printing An Array
//     cout << "Printing the array" << endl;

//     for(int i = 0; i< n; i++ ){
//         cout << arr[i] << " " ;
//     }
// }



// Double the each value of an array.
#include <iostream>
using namespace std; 

int main() {

    int arr[10];
    int n = 5;
    for(int i = 0; i < n; i++){
        cout << "Enter the value of index: " << i << ": " ;
        cin >> arr[i];
    }
    cout << "Print The Araay in Double of My Input:" << endl;
    for(int i = 0; i < n ; i++){
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}
