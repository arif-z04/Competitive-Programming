#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to solve a single test case
void solveTestCase() {
    int n, m;
    cin >> n >> m;

    // Read the cards for each cow
    vector<vector<int>> cards(n);
    for (int i = 0; i < n; ++i) {
        cards[i].resize(m);
        for (int j = 0; j < m; ++j) {
            cin >> cards[i][j];
        }
        sort(cards[i].begin(), cards[i].end()); // Sort each cow's cards
    }

    // Create a permutation of cows
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) perm[i] = i;

    do {
        int top = -1; // The card on top of the center pile
        bool valid = true;

        // Simulate the game round by round
        for (int round = 0; round < m; ++round) {
            for (int i = 0; i < n; ++i) {
                int cow = perm[i];
                // Find the smallest card the cow can play
                auto it = upper_bound(cards[cow].begin(), cards[cow].end(), top);
                if (it == cards[cow].end()) {
                    valid = false;
                    break;
                }
                top = *it; // Update the top card
                cards[cow].erase(it); // Remove the card from the cow's deck
            }
            if (!valid) break;
        }

        if (valid) {
            for (int i = 0; i < n; ++i) cout << perm[i] + 1 << " ";
            cout << endl;
            return;
        }

        // Restore cards after simulation
        for (int i = 0; i < n; ++i) {
            cards[i].clear();
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                cards[i].push_back(x);
            }
            sort(cards[i].begin(), cards[i].end());
        }
    } while (next_permutation(perm.begin(), perm.end()));

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}
