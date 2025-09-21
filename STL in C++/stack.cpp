// A stack stores multiple elements in a specific order, called LIFO.

// LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, 
// where pancakes are both added and removed from the top. So when removing a pancake, 
// it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

#include<iostream>
#include<stack>
using namespace std;

int main(){
    // create a Stack.
    stack<string> s;

    // Add Stack Element.
    s.push("KGF");
    s.push("VIKRAM");
    s.push("MARCO");

    //Access Stack Elements.
    cout<<"Top Element: "<<s.top()<<endl;

    // Remove Elements.
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;

    // Size Of Stack.
    cout<< "Size Of Stack: "<<s.size()<<endl;

    // Empty or not.
    cout<<"Empty Or Not: "<<s.empty()<<endl;

}