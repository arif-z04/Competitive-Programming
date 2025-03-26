#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // a stack of ints
    stack <int> numbers;

    // push into stack
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    // push into stack;
    cout << "Numbers are : ";

    while(!numbers.empty()){

        // print top element
        cout << numbers.top() << ", ";
        
        //pop top element from stack
        numbers.pop();
    }

    return 0;
}