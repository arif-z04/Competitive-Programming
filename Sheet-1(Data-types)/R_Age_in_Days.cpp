#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int days;
    cin >> days;

    int years = 0, months = 0;
    if(days >= 365){
        years = days / 365;
        days %= 365;
    }
    if(days >= 30){
        months = days / 30;
        days %= 30;
    }
    
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}   