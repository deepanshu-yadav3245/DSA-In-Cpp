// Recursion:- When a Function calls itself until a specified condition is met.

// Syntax Structure of Recursion

// return_type recursive_func {
//     ....
//        // Base Condition
//        // Recursive Case
//        ....
// }

#include<iostream>
using namespace std;

int factorial(int n){

    // base case.
    if (n==0)
        return 1;

        int smallerProblem = factorial(n-1);
        int biggerProblem = n * factorial(n-1);
        return biggerProblem;
}
int main(){

    int n;
    cout << "Enter the Factorial Number:" <<endl ;
    cin >> n;

    int ans = factorial(n);

    cout << ans <<endl;
    return 0;    
} 

