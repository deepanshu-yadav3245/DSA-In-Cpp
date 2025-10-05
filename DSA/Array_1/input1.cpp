// take a input to create a array size of 5 and print the total sum of an array.

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[5];
//     int n = 5;
    
//     for (int i = 0; i < n; i++){
//        cout << "Enter the value of index " << i << ": " ;
//        cin >> arr[i];
//     }

//     // Calculate the sum
//     int sum  = 0;
//     for (int i = 0; i < n ; i++ ){
//         sum = sum + arr[i];
//     }
//     cout << endl;
//     cout << "The Sum of the given Array: " << sum << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){

    int arr[5];
    int n = 5;
    for(int i = 0; i < n; i++){
        cout << "Enter the value of index " << i << ": ";
        cin >> arr[i];
    }
    // Calculate the Sum of the array 
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout << endl;
    cout<< "The sum of the given Arrray:" << sum << endl;
    return 0;
}