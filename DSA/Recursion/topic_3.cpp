//  Reverse an Array by using recursion.

// #include <iostream>
// using namespace std;

// //function to reverse the array using recursion
// void reverseArray(int arr[], int start, int end){
//     if (start >= end){  // Base Case.
//         return; 
//     }
//     // Swap the element at start and end.
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     // Recurcive call with updated indices 
//     reverseArray(arr,start + 1, end - 1);
// }

// int main(){
//     int n;

//     cout << "Enter the Size of the array :";
//     cin >> n ;

//     int arr[n];
//     cout << "Enter the Element of the array: ";
//     for (int i = 0; i < n; i++){
//         cin >>arr[i];
//     }

//     // call the reverse function 
//     reverseArray(arr, 0 , n-1);

//     // Print the reversed function
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0; 
// }


// (2) check the string is palidrome
#include<iostream>
using namespace std;

bool f(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i+1,s);
}
int main(){
    string s  = "madsm";
    cout << f(0,s);
    return 0 ;
}

