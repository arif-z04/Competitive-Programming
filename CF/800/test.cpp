#include <bits/stdc++.h>
using namespace std;

int countInInterval(const vector<int>& arr, int low, int high) {
    auto lower = lower_bound(arr.begin(), arr.end(), low);
    auto upper = upper_bound(arr.begin(), arr.end(), high);
    return distance(lower, upper); 
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int low, high;
    cout << "Enter interval (low high): ";
    cin >> low >> high;
    
    int count = countInInterval(arr, low, high);
    cout << "Count of elements in the interval: " << count << endl;
    
    return 0;
}
