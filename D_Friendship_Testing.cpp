#include <bits/stdc++.h>

using namespace std;
int main() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long total_sum = K * (K + 1) / 2;
    unordered_set<long long> unique_elements;
    
    for (const auto &num : A) {
        if (num <= K) {
            unique_elements.insert(num);
        }
    }
    long long sum_in_A = 0;
    for (const auto &num : unique_elements) {
        sum_in_A += num;
    }
    long long result = total_sum - sum_in_A;
    cout << result << std::endl;
    
    return 0;
}
