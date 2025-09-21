#include<iostream>
#include<queue>
using namespace std;

int main(){
    // max-Heap
    priority_queue<int> max;

    // min-Heap
    priority_queue<int ,vector<int>,greater<int> > min;

    // max-heap
    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);
    cout<<"Size: "<<max.size()<<endl;

    int n = max.size();
    for(int i = 0; i<n; i++){
        cout<<max.top()<<endl;
        max.pop();
    }cout<<endl;

     // Min- Heap
    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);
    min.push(3);
    cout<<"Size: "<<min.size()<<endl;

    int m =min.size();
    for(int i = 0; i<m; i++){
        cout<<min.top()<<endl;
        min.pop();
    }cout<<endl;

    cout<<"Khali hai kya bsdk: "<<min.empty()<<endl;
}