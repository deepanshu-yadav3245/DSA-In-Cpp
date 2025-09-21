// # include <iostream>
// # include <string>
// using namespace std;

// class Cars{
//     private:
//            // Data members
//            string company_name;
//            string model_name;
//            string fuel_type;
//            float mileage;
//            double price;

//     public:

//     // default constructor
//        Cars(){
//            company_name  = "Toyota";

//        }
       
//     // Parameterized constructor.
//       Cars(string cname ,string  mname,string ftype,float m,double p)
//       {
//             company_name = cname;
//             model_name = mname;
//             fuel_type = ftype;
//             mileage = m;
//             price =  p;
//       }

//            // Member Functions
//            void setData(string cname, string mname, string ftype,float m, double p)
//            {
//             company_name = cname;
//             model_name = mname;
//             fuel_type = ftype;
//             mileage = m;
//             price =  p;
//            }

//            void displayData()
//            {
//             cout << "Car Properties" << endl;
//             cout << "Car Company Name - " << company_name << endl;
//             cout << "Car Fuel Type - " << fuel_type << endl;
//             cout << "Car Mileage - " << mileage << endl;
//             cout << "Car Price - " << price << endl << endl;
//            }
// };

// int main(){
//     Cars car1,car2(" toyota", "fortuner", "diesel",10, 4500000);
//      car1.setData("Toyota", "Altis" ,"petrol",15.5, 1500000);
//     car1.displayData();
//     car2.displayData();

//     return 0;
// }



#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    // non-Parameterized
    // Teacher(){
    //     dep = "computer Science"
    // }

    // Parametrized Constructor.
    Teacher (string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;
    
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
    // t1.name = "rahul";
    // t1.subject = "C++";
    // t1.setSalary(250000);
    t1.getInfo();

    return 0;
}