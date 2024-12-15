#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int operations = 0;

        for (int i = 0; i < n - 1; i++) {
            if ((a[i] & 1) == (a[i + 1] & 1)) { // Same parity
                operations++;
            }
        }

        cout << operations << "\n";
    }

    return 0;
}