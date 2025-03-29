#include <bits/stdc++.h>

using namespace std;
int isLucky(int num){
    int hasFour = 0;
    int hasSeven = 0;

    while(num > 0){
        int digit = num % 10;

        if(digit == 4){
            hasFour = 1;
        } else if(digit == 7){
            hasSeven = 1;
        }

        num /= 10;

        if(hasFour && hasSeven){
            return 1;
        }
    }

    return 0;


}
int main()
{
    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(isLucky(i)){
            cout << i << " ";
        }
    }
    return 0;
}