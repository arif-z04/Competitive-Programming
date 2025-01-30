#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S; 
    int n = S.length();
    int maxLength = 1; 
    for (int i = 0; i < n; i++) { 
        for (int j = i; j < n; j++) { 
            bool isPalindrome = true;
            for (int start = i, end = j; start < end; start++, end--) {
                if (S[start] != S[end]) {
                    isPalindrome = false;
                    break; 
                }
            }
            if (isPalindrome) {
                int length = j - i + 1; 
                if (length > maxLength) {
                    maxLength = length;
                }
            }
        }
    }

    
    cout << maxLength << endl;
    return 0;
}
