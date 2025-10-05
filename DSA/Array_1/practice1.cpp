//  Find min no of array.

#include <iostream>
#include <limits.h>
using namespace std;

int findMinimunInArray(int arr[],int size){
     int minAns = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
}
return minAns;
}

int main() {
    int arr[] = {23,45,67,89,1};
    int size = 5;

    int minimum = findMinimunInArray(arr,size);
    cout << "Minimum Number is: " << minimum << endl;
    
}
