#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int max = 0;
    for(int i = a; i <= b; i++){
        for(int j = i; j <= b; j++){
            if((i ^ j) > max){
                max = i ^ j;
            }
        }        
    }
    cout << max << endl;
    
    return 0;
}