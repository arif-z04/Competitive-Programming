#include <bits/stdc++.h>
using namespace std;
void findMaxInSubarrays(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        int maxElement = arr[start];
        
        for (int end = start; end < n; end++)
        {
            if (arr[end] > maxElement)
            {
                maxElement = arr[end];
            }
            cout << maxElement << " ";
        }
    }
    cout << endl;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        findMaxInSubarrays(arr, N);
    }

    return 0;
}
