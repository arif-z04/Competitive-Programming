#include <bits/stdc++.h>

using namespace std;

using i64 = long long int;
using ui64 = unsigned long long int;

bool isSum(const vector<i64>&nums, int k, i64 mid){
    i64 sum = 0;
    int count = 1;
    for(i64 num : nums){
        sum += num;
        for(i64 num: nums){
            if(sum > mid){
                sum = num;
                count++;
                if(count > k){
                    return false;
                }
            }
        }
    }

    return true;
}

i64 splitArray(const vector <i64> &nums, int k){
    i64 left = *max_element(nums.begin(), nums.end());
    i64 right = accumulate(nums.begin(), nums.end(), 0LL);

    while(left < right){
        i64 mid = left + (right - left) / 2;
        if(isSum(nums, k, mid)){
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left + 1;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <i64> nums(n);

    for(auto &i:nums) cin >> i;
    cout << splitArray(nums, k) << endl;
    return 0;
}