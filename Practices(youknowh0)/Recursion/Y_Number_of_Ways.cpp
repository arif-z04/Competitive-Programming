#include <bits/stdc++.h>
using namespace std;

int paths(int St, int En){
    if(St == En) return 1;
    if(St > En) return 0;

    return paths(St + 1, En) +
           paths(St + 2, En) +
           paths(St + 3, En);
}

int main(){
    int s, e;
    cin >> s >> e;

    cout << paths(s, e) << endl;
    return 0;
}