// Linear Search...

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n , int num){
    for(int i = 0; i < n; i++){
        if ( arr[i] = num){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n = 7 , num = 5;
    int arr[n] = {1,2,3,4,5,6,7};
    cout << linearSearch(arr,n,num) << endl;

    return n;
}