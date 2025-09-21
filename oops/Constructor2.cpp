
#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Parametrized 

    Teacher (string name, string dept, string subject, double salary){
      this->  name = name;
      this->  dept = dept;
      this->  subject = subject;
      this->  salary = salary;
    }

    // copy constructor.

    Teacher(Teacher &orgObj){
        cout << "I am custom copy Constructor..." <<endl;
        this-> name = orgObj.name;
        this-> dept = orgObj.dept;
        this-> subject = orgObj.subject;
        this-> salary = orgObj.salary;

    } 
    
   void changeDept(string newDept){
    dept = newDept;
   }   

   void getInfo(){
    cout << "name: " << name << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
    cout << "Depatment: " << dept << endl;

    }
};

int main(){
    Teacher t1("rahul","Computer Science", "C++", 250000); 
    // t1.getInfo();

    Teacher t2(t1);  // coustom copy constructor invoke.
    t2.getInfo();

    return 0;
}