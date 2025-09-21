// (3) nested if statements.

#include<iostream>
using namespace std;
int main () {
	int age;
	cout << "How old are you? ";
	cin >> age;

	if(age > 16) {
		cout << "You are an adult! /n";
		// Nested if statement.
		if(age < 18){
			cout << "But you cannot enlist!";
        }
	}
	else {
		cout << "You are not yet an adult! ";
	}
	cout << "Because you are " << age << " years";
   return 0;
}


// Switch statement.

#include<iostream>
using namespace std;

int main () {
   char grade;
   cout << "Please enter your grade: ";
   //Read the grade value from user input
   cin >> grade;
   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl;
         break;
      case 'B' :
    	  cout << "Very Good!" <<endl;
      case 'C' :
         cout << "Good" << endl;
         break;
      case 'D' :
         cout << "Pass" << endl;
         break;
      case 'F' :
         cout << "Fail" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Your grade: " << grade << endl;

   return 0;
}




//  Practice Queation 1
#include<iostream>
using namespace std;

int main(){
    char chr;

    cout << "Enter the Character :";
    cin >> chr;

    if(chr >= 'a' && chr <= 'z'){
        cout << "lowercase";
    }else{
        cout << "uppercase";
    }
    return 0;
}

