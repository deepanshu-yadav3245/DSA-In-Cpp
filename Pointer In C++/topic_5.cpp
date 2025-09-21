//(1) Array Pointer.

// C++ Program to display address of each element of an array 

// #include <iostream>
// using namespace std;

// int main()
// {
//     float arr[3];

//     // declare pointer variable
//     float *ptr;
    
//     cout << "Displaying address using arrays: " << endl;

//     // use for loop to print addresses of all array elements
//     for (int i = 0; i < 3; ++i)
//     {
//         cout << "&arr[" << i << "] = " << &arr[i] << endl;
//     }

//     // ptr = &arr[0]
//     ptr = arr;

//     cout<<"\nDisplaying address using pointers: "<< endl;

//     // use for loop to print addresses of all array elements
//     // using pointer notation
//     for (int i = 0; i < 3; ++i)
//     {
//         cout << "ptr + " << i << " = "<< ptr + i << endl;
//     }

//     return 0;
// }


// (2) Pointer Arithmetic.(Increment ++ , Decrement --)

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int*ptr = &a;

//     cout << ptr <<endl;

//     ptr++;
//     cout << ptr << endl; // +4byte

//     ptr--;
//     cout << ptr << endl; // -4byte

//     return 0 ;
    
// }



// (3) Add || Subtract Number.

#include <iostream> 
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "It Return Normal Value: " << ptr << endl;

     ptr = ptr + 2 ; // 2int ==> 8byte
     cout << "Ptr Increase By 8 byte: " << ptr << endl;

     return 0 ;
}



