// Find a missing number....--> [1,2,4,5] in this array 3 is a missing number.

#include<iostream>
using namespace std;

int missingNumber(int arr[], int N){
    for(int i = 1; i <= N; i++){
      int flag = 0;
        for(int j = 0; j < N-1; j++){
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        return i;
    }
    return -1;
}
int main(){
    int N = 5;
    int arr[N] = {1,2,4,5};
    int ans = missingNumber(arr,N);
    cout << "The Missing Number is: " << ans << endl;
    return 0; 

}

