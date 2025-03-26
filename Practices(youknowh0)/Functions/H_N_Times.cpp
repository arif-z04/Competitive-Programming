#include <bits/stdc++.h>

using namespace std;
void printChar(int n, char c){

    for(int i = 0; i < n; i++){
        cout << c;
        if(i < n){
            cout << " ";
        }
    }
    
}
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n;
        char c;
        cin >> n >> c;
        printChar(n, c);
        cout << endl;
    }
    return 0;
}