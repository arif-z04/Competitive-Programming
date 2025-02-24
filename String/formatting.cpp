#include <bits/stdc++.h>

using namespace std;

string formatWithCommas(long long num){
    string numStr = to_string(num);
    
    string result;
    int count = 0;

    for(int i = numStr.length() - 1; i >= 0; i--){
        result = numStr[i] + result;
        count++;
        if(count % 3 == 0 && i != 0){
            result = ',' + result;
        }
    }

    return result;
}
int main()
{
    long long num;
    cin >> num;
    cout << formatWithCommas(num) << endl;
    return 0;
}