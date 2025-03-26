#include <bits/stdc++.h>

using namespace std;

int cntTowers(int r, int c, vector<string>& grid) {
    
    vector<pair<int, int>> emptyCells;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (grid[i][j] == '.') {
                emptyCells.push_back({i, j});
            }
        }
    }

    int count = 0;
    int n = emptyCells.size();

    for (int a = 0; a < n; ++a) {
        for (int b = 0; b < n; ++b) {
            if (b == a) continue;
            if (emptyCells[a].first != emptyCells[b].first && emptyCells[a].second != emptyCells[b].second) continue;
            for (int c = 0; c < n; ++c) {
                if (c == a || c == b) continue;
                if (emptyCells[b].first != emptyCells[c].first && emptyCells[b].second != emptyCells[c].second) continue;
                for (int d = 0; d < n; ++d) {
                    if (d == a || d == b || d == c) continue;
                    if (emptyCells[c].first != emptyCells[d].first && emptyCells[c].second != emptyCells[d].second) continue;
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> grd(r);
    for(int i = 0; i < r; i++){
        cin >> grd[i];
    }
    int result = cntTowers(r, c, grd);
    cout << result << endl;

    return 0;
}