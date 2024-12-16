#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int x, y;
    cin >> t;

    while (t--)
    {
        cin >> x >> y;

        int sum = 0;
        int start = min(x, y);
        int end = max(x, y);

        for(int i = start + 1; i < end; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}