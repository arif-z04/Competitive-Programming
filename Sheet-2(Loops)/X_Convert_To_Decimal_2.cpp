#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long int dec;
        cin >> dec;
        int i = 0;
        int num = dec;
        long int sum = 0;
        
        while(num > 0){
            int digit = num % 2;
            num /= 2;
            if(digit == 1){
                sum += pow(2, i);   
                i++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}