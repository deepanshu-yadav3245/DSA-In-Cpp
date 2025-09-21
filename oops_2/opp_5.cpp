
// POLYMORPHISM :--

// #include<iostream>
// using namespace std;

// class Student{
// public:
//     string name;
     
//      // non-parameterized constructor
//     Student(){
//         cout << "non-parameterized" << endl;
//     }

//     Student(string name){
//         this-> name = name;
//         cout << "Parameterized Constructor";
//     }
// };

// int main(){
//     Student s1("rahul yadav");
//     return 0 ;
// }



// Function Overloading :--
#include<iostream>
using namespace std;

int add(int a, int b)
{  
    cout << "Function 1" << endl;
    return(a + b);
}

double add (double a, double b)
{
    cout << "Function 2" << endl;
    return(a + b);
}

int add (int a, int b, int c)
{
    cout << "Function 3" << endl;
    return (a + b + c);
}
double add(int a, double b)

{
    cout << "Function 4" << endl;
    return(a + b);
}

double add (double a, int b) 
{
    cout << "Function 4" << endl;
    return (a + b);
}

int main()
{
    cout << "Addition is: " << add (23,34)     << endl;
    cout << "Addition is :" << add (23.3,34.5) << endl;
    cout << "Addition is: " << add (23,34, 45) << endl;
    cout << "Addition is: " << add (23.4,45)   << endl;
    cout <<"Addition is: " << add (23,34.5)    << endl;

     return 0;
}



 

