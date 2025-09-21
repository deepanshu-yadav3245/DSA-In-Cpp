// (1) ENCAPSULATION:- Encapsulation is wrapping up of data & member function in a single unit called class.

// (2) Key aspects of encapsulation are :-
//     Data Hiding, Abstraction, Getter and Setter

// (3) Benefits Of encapsulation:
//     Data Protection, Improved Maintainability, Modularity, .

# include <iostream>
using namespace std;

class Employee {  
private:
    int salary;  // Private data member 

public: 
    // Getter function
    int getSalary(){
        return salary;
    }

    // Setter Function

    void setSalary(int s){
    
    }


};
int main(){
    Employee emp;

    emp.setSalary(50000);
    cout << "Empolyee Salary: " << emp.getSalary() << endl;

    return 0 ;
}