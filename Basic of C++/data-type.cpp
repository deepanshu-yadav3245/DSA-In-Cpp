//  DATA TYPE IN CPP---

// There are 4 types of data types in C++ language.

// Types.                                         Data Types.

// (1) Basic Data Type           -----           int(4 bytes), char(1 bytes), float(4 bytes),boolean(1 bytes), double(8bytes), etc.
// (2) Derived Data Type         -----           array, pointer, etc.
// (3) Enumeration Data Type     -----           enum.
// (4) User Defined Data Type    -----           structure.

// #include <iostream>
// using namespace std;

// int main() {
//     int age = 24;
//     char grade = 'a';
//     float PI = 3.14f;
//     bool isSafe = true;
//     double price  = 100.4;

//     cout << isSafe << endl; //true -> 1 & false -> 0

//     return 0;
// }


//  Type Conversion :--

// #include<iostream>
// using namespace std;

// int main() {
//     double price = 123.45;

//     int newPrice = (int)price;
//     cout<<newPrice<<endl;
//     return 0 ;
// }

#include<iostream>
using namespace std;

int main(){
    int price = 123;

    int newprice = (float)price;
    cout << newprice << endl;
    return 0;
}