#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

#define mem(arr, num) memset(arr, num, sizeof(arr));

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n; 
    vector <int> cards(n);
    for(auto &i:cards) cin >> i;

    int left = 0, right = n - 1;
    int s = 0, d = 0;
    bool serejaTurn = true;
    while(left <= right){
        if(cards[left] > cards[right]){
            if(serejaTurn) s += cards[left++];
            else d += cards[left++];
        } else {
            if(serejaTurn) s += cards[right--];
            else d += cards[right--];
        }
        serejaTurn = !serejaTurn;
    }
    cout << s << " " << d << endl;
    return 0;
}


/*
- distinct numbers pick
- Sereja pick first
- pick always the larger one
- pick from the most left/right
*/