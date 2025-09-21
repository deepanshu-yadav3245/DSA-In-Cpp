// A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back).
//  You can also access elements by index numbers.

#include<iostream>
#include<deque>
using namespace std;
int main(){
    // create a deque
    deque<int> d;

    //Add Deque Elements
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    // Access Element 
    cout<<"First Index of element: "<<d.at(1)<<endl;

    // Front and Back.
    cout<<"Front Element: "<<d.front()<<endl;
    cout<<"Back Element: "<<d.back()<<endl;

    // Empty Method.
    cout<<"Empty or not empty It return False(0) or True(1): "<<d.empty()<<endl;

    // Size 
    cout<<"Size Of:"<<d.size()<<endl;

    // Delete an Element.
    cout<<"Before erase: "<< d.size()<<endl;
    d.erase(d.begin(),d.begin() + 1);
    cout<<"After erase: "<<d.size()<<endl;
    
}
