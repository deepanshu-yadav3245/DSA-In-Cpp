// CLASS  AND  OBJECT .

//  (1) object are the entities in the real world.
//  (2) class is like a blueprint of an object.

// ACCESS MODIFIERS:-

// (1) private:-  Data & method accessible inside class.
// (2) public :-  Data & method accessible to everyone.
// (3) Protected:- Data & method accessible inside class & to its derived class.


// #include <iostream>
// #include <string>
// using namespace std;


// class Teacher{

//     private:
//     double salary;


//     public:
//      // properties/ Attribute
//     string name;
//     string dept;
//     string subject;
  

//     // Method / Member Function
//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     //setter
//     void setSalary(double s){
//         salary = s;
//     }

//     //getter
//     double getSalary(){
//         return salary;
//     }
// };

// int main(){
//     Teacher t1;
//     t1.name = "rahul";
//     t1.dept = "C

     Computer science";
//     t1.subject = "C++";
//     t1.setSalary(24000);

//     cout << t1.name << endl;
//     cout << t1.dept << endl;
//     cout << t1.subject << endl;
//     cout << t1.getSalary() << endl;

//     return 0;
// }


// // Exapmple 2:--

# include <iostream>
using namespace std;

class Student{
    public:

    string name;
    string course;
    int age;
    int enroll;

};
int main(){
    Student s1;

    s1.name = "rahul";
    s1.course = "Computer Science";
    s1.age = 21;
    s1.enroll = 2300102393;

    cout << s1.name << endl;
    cout << s1.course << endl;
    cout << s1.age << endl;
    cout << s1.enroll << endl;


    return 0;
}

//  Exzmple 3:-

// Create a Car class with some attributes
#include<iostream>
#include<string>
using namespace std;


class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}