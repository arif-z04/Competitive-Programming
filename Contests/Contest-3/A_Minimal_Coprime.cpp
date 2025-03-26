#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        long a, b;
        long count = 0;
        cin >> a >> b;
        if(a == 1){
            count++;
            a++;
        }
        
        if(a < b){
            count += b - a;
        }

        cout << count << endl;

    }
    return 0;
}