#include <bits/stdc++.h>

using namespace std;

int countInRange(const vector<int> &arr, int L, int R){
    auto lower = lower_bound(arr.begin(), arr.end(), L);
    auto upper = upper_bound(arr.begin(), arr.end(), R);

    return upper - lower;
}
int main(){
    vector <int> arr = {1, 2, 3, 4, 5, 6, 6, 7, 8, 8, 9};

    int L, R;
    cin >> L >> R;

    cout << "[" << L << ", " << R << "]: " << countInRange(arr, L, R) << endl;

    return 0;
}