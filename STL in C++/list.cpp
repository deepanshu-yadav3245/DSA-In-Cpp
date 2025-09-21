// A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.

// However, two major differences between lists and vectors are:

// (1) You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

// (2) Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

#include<iostream>
#include<list>
using namespace std;

int main(){
    // create a list
    list<int> l;

    // Add element 
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    // size of list.
    cout<<"Size Of List: "<<l.size()<<endl;

    //


}