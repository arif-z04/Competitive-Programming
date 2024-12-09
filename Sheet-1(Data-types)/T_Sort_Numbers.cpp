#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int numbers[3] = {a, b, c};

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        cout << numbers[i] << endl;
    }

    cout << endl;

    cout << a << endl << b << endl << c << endl;
    return 0;
}