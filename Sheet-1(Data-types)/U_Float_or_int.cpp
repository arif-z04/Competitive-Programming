#include <bits/stdc++.h>

using namespace std;

int main()
{
    double number;
    cin >> number;

    int IntegerPart = floor(number);
    double decimalPart = number - IntegerPart;

    if(decimalPart != 0.00){
        cout << "float " << IntegerPart << " " << decimalPart << endl;
    } else {
        cout << "int " << IntegerPart << endl;
    }

}