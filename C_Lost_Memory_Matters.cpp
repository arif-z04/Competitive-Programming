#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector <long long> nums;

    int num;

    while(true){
        cin >> num;
        nums.push_back(num);

        if(num==0){
            break;
        }
    }

    for(int i = nums.size() - 1; i >= 0; --i){
        cout << nums[i] << endl;
    }

    return 0;
}