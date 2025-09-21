// Pass By Reference(pointer & alias)

#include <iostream>
using namespace std;

void changeA(int* ptr) {    // pass by Value
    *ptr = 20;
}

int main(){
    int a = 10;
    changeA(&a);

    cout << "inside main fnx : " << a << endl; // 

    return 0;
}
