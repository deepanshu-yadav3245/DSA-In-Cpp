// pointer to pointer.

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int* *parptr = &ptr;

    cout << &ptr << endl;
    cout << parptr << endl;

    cout << &a << endl;
    cout << ptr << endl;
    return 0 ;

}






// Dereference Operator---

// To get the value pointed to by a pointer, you need to use the dereferencing operator * 
//(e.g., if pNumber is a int pointer, *pNumber returns the value pointed to by pNumber . It is called dereferencing or indirection).

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; // pointer.
    int **parptr = &ptr; // pointer to pointer

    cout << *(&a) << endl;
    cout << *ptr << endl;
    cout << *(parptr) << endl;
    cout << **(parptr) << endl;
    return 0;
}