#include <bits/stdc++.h>
using namespace std;

template<typename any>
any findmax(vector<any> &arr){
    any max = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

template<typename any>
any findmin(vector<any> &arr){
    any min = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

template<typename any>
int Findprimecount(vector<any> &arr){
    int count = 0;
    for(int num:arr){
        if(isPrime(num)){
            count++;
        }
    }
    return count;
}

bool isPalindrome(int n){
    if(n < 0) return false;
    int org = n;
    int rev = 0;

    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return org == rev; // Fixed here
}

template <typename any>
int countPalindrome(vector<any> &arr){
    int count = 0;
    for(int num:arr){
        if(isPalindrome(num)){
            count++;
        }
    }
    return count;
}

int countDivisors(int num){
    int count = 0;
    for(int i = 1; i <= sqrt(num); i++){ // Fixed the condition
        if(num % i == 0){
            if (i == num / i) {
                count++; // Perfect square case
            } else {
                count += 2; // Pair of divisors
            }
        }
    }
    return count;
}

template <typename any>
int findNumberMaxDiv(const vector<any> &arr){
    int maxDiv = 0;
    int numWithMaxDiv = arr[0];

    for(int num : arr){
        int div = countDivisors(num);
        if(div > maxDiv || (div == maxDiv && num > numWithMaxDiv)){
            maxDiv = div;
            numWithMaxDiv = num;
        }

    }
    return numWithMaxDiv;
}

int solve(){
    int n; 
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The maximum number : " << findmax(arr) << endl;
    cout << "The minimum number : " << findmin(arr) << endl;
    cout << "The number of prime numbers : " << Findprimecount(arr) << endl;
    cout << "The number of palindrome numbers : " << countPalindrome(arr) << endl;
    cout << "The number that has the maximum number of divisors : " << findNumberMaxDiv(arr) << endl;

    return 0;
}

int main(){
    solve();
}
