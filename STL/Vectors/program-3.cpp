#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v = {1,2,3,4,5};

    // cout << "v.begin() = " << *(v.begin()) << endl;
    cout << "v.end() = " << *(v.end()) << endl;
    cout << "v.capacity() = " << v.capacity() << endl;
    for(int i:v){
        cout << i << endl;
    }
    return 0;
}