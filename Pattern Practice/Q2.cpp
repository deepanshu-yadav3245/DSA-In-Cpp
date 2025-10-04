// Print A character 

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        char ch = 'A';
        for(int j = 0; j<n; j++){
            cout << ch << " ";   // ASCII value of A is 65; 
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}