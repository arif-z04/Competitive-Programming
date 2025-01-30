#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name1, name2;
    string name3, name4;
    cin >> name1 >> name2;
    cin >> name3 >> name4;

    if(name2==name4){
        cout << "ARE Brothers";
    } else {
        cout << "NOT";
    }
    
    return 0;
}