#include <bits/stdc++.h>
#
using namespace std;

int frequency(vector <int> &v, int x){
    auto upper = upper_bound(v.begin(), v.end(), x);

    auto lower = lower_bound(v.begin(), v.end(), x);

    return upper - lower;
}
int main(){
    vector<int> v = {1, 2, 2, 2, 3, 4, 4, 5};

    cout << "Frequency of 2: " << frequency(v, 2) << endl;

    return 0;
}
