#include <bits/stdc++.h>

using namespace std;

void findFirstandLast(vector <int> &v, int x){
    int first = lower_bound(v.begin(), v.end(), x) - v.begin();

    int last = upper_bound(v.begin(), v.end(), x) - v.begin() - 1;
    
    if(first < v.size() && v[first] == x){
        cout << first <<" "<< last << "\n";
    } else {
        cout << "not found";
    }
}

int main(){
    vector <int> v = {1, 3, 3, 3, 5, 7, 9};
    findFirstandLast(v, 3);

    return 0;
}