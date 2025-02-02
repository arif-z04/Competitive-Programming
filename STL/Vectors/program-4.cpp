#include <bits/stdc++.h>

using namespace std;

int main(){
    // iteration

    vector <int> v = {1,2,3,4,5,6};

    vector <int> ::iterator it;
    
    for(it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    

    // rbegin = reverse begin (end value pos of the vec)
    // rend = reverse end (first pos of the vec)

    for(auto it = v.rbegin(); it!=v.rend(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
    return 0;
}