#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   

    int x; 
    cin >> x;

    int pos;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            pos = i;   
        } else {
            pos = -1;
        }
    }

    cout << pos << endl;

    return 0;
}