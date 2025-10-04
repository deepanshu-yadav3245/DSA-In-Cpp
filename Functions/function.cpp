// Function:- Function is used to  reduce the  redundancy of code.

// Declaration of a function:---

//        return_type function_name(data_type parameter...)  
//        {    
//              //code to be executed    
//        }  

#include<iostream>
using namespace std;

int sum(int a,int b){ // parameter
    int s = a + b;
    return s;
}

int main(){
    cout<<sum(20,4900); //Argument 
    return 0;
}



// Calculate sum of numebrs from 1 to N
#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout << sumN (120) << endl ;
    cout << sumN (200) << endl ;
    return 0;
}

// calculate N factorial:--

#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;

    for(int i = 1; i<= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    cout << "factorial = " << factorialN(23) <<endl;
    cout << "factorial = " << factorialN(1)  <<endl;
    return 0;
}
