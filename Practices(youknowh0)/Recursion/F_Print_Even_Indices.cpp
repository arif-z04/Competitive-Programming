#include <bits/stdc++.h>

using namespace std;

void fn(vector<int> &v, int index){

    if(index < 0){
        return;
    }
    cout << v[index] << " ";
    fn(v, index - 2);
}

int main(){
    int n;
    cin >> n;
    vector <int> a(n);

    for(auto &i:a) cin >> i;    
    int lst_even_index = (a.size() & 1) ? a.size() - 1 : a.size() - 2;
    fn(a, lst_even_index);    

    return 0;
}