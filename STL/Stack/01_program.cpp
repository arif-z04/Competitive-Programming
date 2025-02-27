#include <bits/stdc++.h>
using namespace std;

int main(){

    stack <int> s; // last IN, first OUT

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "After pop, top element: " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    cout << "Stack size: " << s.size() << endl;

    return 0;
}