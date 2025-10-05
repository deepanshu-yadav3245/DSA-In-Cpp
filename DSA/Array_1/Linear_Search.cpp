//  Linear Search In An Array.

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,4,56,10,54};
    int target = 11;

    int n = 5;

    bool flag = 0;
    // 0 -> Not FOund
    // 1 -> Found
    for(int i = 0; i < n; i++){
        if(arr[i]==target){
            // Element fount 
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        cout << "Target Found";
    }else {
        cout << "Target Not Found";
    }

    return 0;
}