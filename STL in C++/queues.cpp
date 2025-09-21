//A queue stores multiple elements in a specific order, called FIFO.

// FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket.
// The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming.

#include<iostream>
#include<queue>
using namespace std;

int main(){
    // create Queue
    queue<string> q;

    // Add Queue Element.
    q.push("Kill");
    q.push("Merco");
    q.push("Animal");
    
     cout<<"Size After pop: "<<q.size()<<endl;
    cout<<"First Element: "<<q.front()<<endl;
    
    // Remove Element.
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;

    // Size Of Queue Element.
    cout<<"Size After pop: "<<q.size()<<endl;
}