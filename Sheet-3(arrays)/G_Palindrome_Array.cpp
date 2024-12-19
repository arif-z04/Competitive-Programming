#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int isPalindrome = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[n - i - 1]){
            isPalindrome = 1;
        } else {
            isPalindrome = 0;
        }
    }
    if(isPalindrome){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}