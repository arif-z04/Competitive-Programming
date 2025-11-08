#include <bits/stdc++.h> 

using namespace std;

long long totalSUM = 0;
long long minDiff = LLONG_MAX;

void divide(int index, long long group1Sum, const vector <int> &v){
    if(index == v.size()){
        long long group2Sum = totalSUM - group1Sum;
        minDiff = min(minDiff, abs(group1Sum - group2Sum));
        return;
    }

    divide(index + 1, group1Sum + v[index], v);
    divide(index + 1, group1Sum, v);
}

int main(){
    int n;
    cin >> n;

    vector <int> v(n);
    for(auto &i:v){
        cin >> i;
        totalSUM += i;
    }

    divide(0,0,v);
    cout << minDiff << endl;
    return 0;
}