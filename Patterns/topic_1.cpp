// Question (1):-  Square Pattern.

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i=1; i<=n; i++){  //outer. 

//         for(int j=1; j<=n; j++){  // Inner.
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0 ;
// }




// Pattern in The form of Alphabet.
#include<iostream>
using namespace std;

int main(){
    int n = 7;

    for(int i = 0; i<n; i++){
        char ch = 'A';

        for(int j= 0; j<n; j++){
            cout << ch << " ";
            ch = ch+1;
        }
        cout << endl;
    }
    return 0 ;
}