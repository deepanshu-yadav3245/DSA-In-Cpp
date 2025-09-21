// Null Pointer.

# include <iostream>
using namespace std;

int main(){
   
   int **ptr = NULL;

   cout << ptr << endl;
    return 0;
}



// Practice question :
#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int*ptr = &a;
    int **parptr = &ptr;

    cout << *ptr <<endl;
    cout << **parptr <<endl;
    cout << ptr << endl;
    cout << *parptr << endl;

    return 0;
}