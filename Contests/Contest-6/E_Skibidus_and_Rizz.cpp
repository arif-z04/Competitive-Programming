#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        if (k > max(n, m)) {
            cout << -1 << "\n";
            continue;
        }

        string result;
        int max_blocks = max(n, m);

        if (k <= max_blocks) {
            if (n >= m) {
                int group_size = n / k, extra = n % k;
                for (int i = 0; i < k; i++) {
                    int current_group = group_size + (extra > 0 ? 1 : 0);
                    result += string(current_group, '0');
                    if (m > 0) {
                        result += '1';
                        m--;
                    }
                    extra--;
                }
                result += string(m, '1');
            } else {
                int group_size = m / k, extra = m % k;
                for (int i = 0; i < k; i++) {
                    int current_group = group_size + (extra > 0 ? 1 : 0);
                    result += string(current_group, '1');
                    if (n > 0) {
                        result += '0';
                        n--;
                    }
                    extra--;
                }
                result += string(n, '0');
            }
            cout << result << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
