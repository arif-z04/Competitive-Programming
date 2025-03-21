// Finding frequency of Elements

#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 1, 2, 1, 4, 3, 2};
    map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    for (auto it : freq) {
        cout << "Number: " << it.first << ", Frequency: " << it.second << endl;
    }
    return 0;
}