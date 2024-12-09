#include <bits/stdc++.h>

using namespace std; 

int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        
        int R2 = x*x+ y*y;
        int x1 = -y, y1 = x;
        int x2 = y, y2 = -x;
        int x3 = -x, y3 = -y;

        if (x1 * x1 + y1 * y1 == R2 && x2 * x2 + y2 * y2 == R2 &&
        x3 * x3 + y3 * y3 == R2) {
            printf("%d %d\n%d %d\n%d %d\n", x1, y1, x2, y2, x3, y3);
        } else {
            printf("-1\n");
        }
            
    }
    
    return 0;
}