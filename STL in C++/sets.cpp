// A set stores unique elements where they:

// (1) Are sorted automatically in ascending order.
// (2) Are unique, meaning equal or duplicate values are ignored.
// (3) Can be added or removed, but the value of an existing element cannot be changed.
// (4) Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

#include<iostream>
#include<set>
using namespace std;

int main(){
    // Create a Set.
    set<int> s;

    // Add Elements
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);


    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;
    

    // Remove Elements
    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);
    // for(auto i : s){
    //     cout<<i<<endl;
    // }


    // Count
    cout<<"5 is Present or not: "<<s.count(5)<<endl;
}
