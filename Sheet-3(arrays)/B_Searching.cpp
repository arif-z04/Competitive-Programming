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

    int num;
    cin >> num;

    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            pos = i; 
            break;   
        }
    }

    cout << pos << endl; 
    return 0;
}
