// list

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}