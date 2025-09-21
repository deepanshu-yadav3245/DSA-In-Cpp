//  Basic Problem Of Recursion.

// (1) Print Name N time using resurcion.
#include<iostream>
using namespace std;
void func(int i ,int n){
    
    // Base Condition.
    if (i>n)
    return ;
    cout << "rahul" << endl;

    //function call to print till i increments.
    func(i+1 , n);
}
int  main(){
    
    // Here, let's take the value of n to be 4.
    int n;
    cin>> n;
    func(1,n);
    return 0 ;
}

// (2) Print linearelly 1 to N.
#include<iostream>
using namespace std;

void func(int i, int n){

    // base Condition 

    if(i >n)
    return;

    cout << i << " " ;
    func (i+1, n);
}
int main(){
    int n;
    cin>> n ;
    func(1 ,n);
    return 0;
}


// (3) Print in term of N --> 1    N => 4 = 4,3,2,1.
#include<iostream>
using namespace std;

void func(int i, int n){

    if (i <1 )
    return ;
    cout << i << " "; 
    func (i-1, n);
}
int main(){
    int n;
    cout << "Enter the Number : " << endl;
    cin >> n;
    func(n, n);
    return 0 ;
}