

#include <bits/stdc++.h>
#define dl double

using namespace std;


dl dist(dl x1, dl y1, dl x2, dl y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
dl totalDist(dl x1, dl y1, dl x2, dl y2, dl river_x) {
    return dist(x1, y1, river_x, 0) + dist(river_x, 0, x2, y2);
}

int main() {
    int test; 
    cin >> test;

    while (test--) {
        dl x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        dl left = min(x1, x2);
        dl right = max(x1, x2);
        dl min_distance = 1e18;

        while (right - left > 1e-7) {
            dl mid1 = left + (right - left) / 3;
            dl mid2 = right - (right - left) / 3;

            dl d1 = totalDist(x1, y1, x2, y2, mid1);
            dl d2 = totalDist(x1, y1, x2, y2, mid2);
            min_distance = min({min_distance, d1, d2});

            if (d1 < d2) {
                right = mid2;
            } else {
                left = mid1;
            }
        }
        cout << fixed << setprecision(10) << min_distance << endl;
    }

    return 0;
}
