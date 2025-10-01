// Some Question On Loop:-

// Sum of n Numbers

// # include <iostream>
// using namespace std;

// int main(){
//     int n = 100;
//       int sum = 0;

//     for(int i =1; i<=n; i++){
//         sum = sum+i;

//         if (i==5){
//             break;   // break Statement.
//         }
//     }

//     cout <<"Sum = "<<sum <<endl;
//     return 0;
// }



// Sum Of All Odd Number From 1 to N;
#include <iostream>
using namespace std;

int main(){
    int n = 19;
    int oddSum = 0;

    int i = 1;
    while (i <= n){
        if(i%2!=0){
            oddSum += i;
        }
     i++;
    }
    
    cout<<"The Sum Of Odd Number = "<<oddSum<<endl;
    return 0;

}


 // Sum Of number form 1 to n;
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 10;
//     int sum = 0;

//     for(int i=1; i<=n; i++){
//         sum = sum + i;   
//     }

//      cout << "Sum = " <<sum << endl;

//     return 0;
// }