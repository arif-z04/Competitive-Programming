#include <bits/stdc++.h>

using namespace std;

string check321(int n){
    string num = to_string(n);
    for(size_t i = 0; i < num.length() - 1; i++){
        if(num[i] <= num[i+1]){
            return "No";
        }
    }

    return "Yes";
}

int main()
{
    int N;
    cin >> N;
    cout << check321(N) << endl;
    return 0;
}



