#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;

    vector<int> a;

    while(q--){
        int type;
        cin >> type;

        if(type==0){
            int x;
            cin >> x;
            a.push_back(x);
        } else if (type == 1){
            int p;
            cin >> p;
            cout << a[p] << endl;
        } else if (type == 2){
            a.pop_back();
        }
    }


    return 0;
}