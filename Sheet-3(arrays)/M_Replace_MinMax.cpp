#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    int min = 1e9, max = 0;
    int min_pos = 0, max_pos = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }

    }
    int temp = arr[min_pos];
    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}