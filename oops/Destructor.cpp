#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    // Constructor
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // destructor
    ~ Student(){
        cout << "Hi I Delete everything: "<<endl;
        delete cgpaPtr;            // code main kio change nhi hoga memory mai  change hota hai.
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }

};
int main(){
    Student s1("Rahul Yadav", 9.6);
    s1.getInfo();

    return 0 ;
}