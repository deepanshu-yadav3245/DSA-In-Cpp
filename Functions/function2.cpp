// C++ function call by value:- Copy of Argument is passed to Function
// In call by value, original value is not modified.

#include <iostream>
using namespace std;

// Function to demonstrate call by value
void modifyValue(int x) {
    x = x * 2;   // This change will not affect the original variable
    cout << "Inside modifyValue function: x = " << x << endl;
}

int main() {
    int num = 10;
    cout << "Before calling modifyValue: num = " << num << endl;

    // Call the function with the value of num
    modifyValue(num);

    cout << "After calling modifyValue: num = " << num << endl;

    return 0;
}


// Calculate sum of digits of a Number.

#include <iostream>
using namespace std;

int sumOfDigit(int num){
   int digSum = 0;

   while(num > 0){
      int lastDig = num % 10;
      num /= 10;

      digSum += lastDig;
   }
   return digSum;


}
int main() {
   cout << "Sum = " <<sumOfDigit(2323) << endl;
   cout << "Sum = " <<sumOfDigit (23456789) <<endl;

   return 0;
}

