#include <iostream>
#include<vector>
using namespace std;

int main(){               
    // create a Vector.
    vector<int> v;
    cout << "Capacity: "<<v.capacity()<<endl;


    // Add Vector Element.
    v.push_back(1);
    cout << "Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout << "Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout << "Capacity: "<<v.capacity()<<endl;

     // Check if a Vector is Empty.
    cout<<"Empty or not Empty: "<<v.empty()<<endl;

    // Size Of Vector.
    cout<<"Size: "<<v.size()<<endl;

    // Find The index from the vector
    cout<< "Element at 2nd Index :"<<v.at(2)<<endl;


    // Front and Back Element In vector.
    cout <<"Front_Element: "<<v.front()<<endl;
    cout <<"Back_Element: " <<v.back()<<endl;

    // Remove vector Element 
    cout<<"Before pop: "<<endl;
    for(int i:v){
        cout<<i<< " ";
    }cout<<endl;

    cout<<"After pop: "<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }

    // Clear vector Element

    cout<<"Before  Clear: "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size: "<<v.size()<<endl;

}