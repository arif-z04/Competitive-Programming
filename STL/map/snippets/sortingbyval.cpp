//sorting by value using vector <pair<>>


#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair <int, int> b){
    return a.second > b.second;
}

int main()
{
    map<int, int> mp = {{1, 5}, {2, 3}, {3, 8}};
    vector<pair<int, int>> v(mp.begin(), mp.end());

    // This sorts the vector using the custom comparator function cmp, which we defined earlier.

    // descending order
    sort(v.begin(), v.end(), compare);

    for(auto i:v){
        cout << i.first << " -> " << i.second << endl;
    }

    return 0;
}