// Inherisatnce:


#include<iostream>
using namespace std;

class Person {
    public:

    string name;
    int age;

    // Constructor
    // Person(string name, int age){
    //     this-> name = name;
    //     this-> age = age;
    // }
    Person(){
      cout << "This is a Default Constructor";
    }
};

class Student : public Person{
    public:
    int rollno;

     void getInfo(){

        cout << "name: "<< name << endl;
        cout << "Age: " << age << endl;
        cout << "RollNo: " << rollno << endl;
    }
};
int main() {
    Student s1;
    s1.name = "Rahul Yadav";
    s1.age = 23;
    s1.rollno = 19;

    s1.getInfo();
    return 0;
    
}