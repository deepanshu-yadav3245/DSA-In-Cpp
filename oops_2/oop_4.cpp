// // Multi-level Inheritance:

// #include <iostream>
// using namespace std;

// // Base Class: Animal
// class Animal {
// public:
//     void eat() {
//         cout << "Animal is eating." << endl;
//     }

//     void sleep() {
//         cout << "Animal is sleeping." << endl;
//     }
// };

// // Derived Class: Mammal (inherits from Animal)
// class Mammal : public Animal {
// public:
//     void walk() {
//         cout << "Mammal is walking." << endl;
//     }
// };

// // Further Derived Class: Dog (inherits from Mammal)
// class Dog : public Mammal {
// public:
//     void bark() {
//         cout << "Dog is barking." << endl;
//     }
// };

// int main() {
//     Dog myDog;

//     // Access methods from all levels of inheritance
//     myDog.eat();   // From Animal
//     myDog.sleep(); // From Animal
//     myDog.walk();  // From Mammal
//     myDog.bark();  // From Dog

//     return 0;
// }


// multiple Inheritance.

#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA :public Student,public Teacher {

};

int main(){
    TA t1;
    t1.name = "Rahul Yadav";
    t1.rollno = 23;
    t1.subject = "Data Structure and Algorithm";
    t1.salary = 30000;

    cout << "Name: " << t1.name << endl;
    cout << "Roll_No: " << t1.rollno << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: "  << t1.salary << endl;

return 0 ;
}