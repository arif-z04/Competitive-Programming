#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int operation = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    while (true)
    {
        bool allEven = true;

        for(int i = 0; i < n; i++){
            if(arr[i] % 2 != 0){ 
                allEven = false;
                break;
            } 
        }

        if(!allEven){
            break;
        }

        for(int i = 0; i < n; i++){
            arr[i] /= 2;
        }

        operation++;
    }
    

    cout << operation << endl;

    return 0;
}