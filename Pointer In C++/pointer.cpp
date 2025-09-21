//  Memory Address
# include <iostream>
# include <vector>
using namespace std;

int main(){
    int a = 10;
    cout << &a <<endl;
    return 0 ;
 }

#include<iostream>
using namespace std;

int main(){
    int a = 20;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
}
