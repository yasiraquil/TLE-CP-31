#include <bits/stdc++.h>
#include<map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 0) { 
            cout << "No" << '\n';
            continue;
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Calculate unique elements
        map<int, int> mp;
        for (int x : v) {
            mp[x]++;
        }

        if (mp.size() > 2) {
            cout << "No" << '\n';
        } 
        else if (mp.size() == 2) {
            // Find the diff in case of two elements
            auto it = mp.begin();
            int first_val = it->second;
            it++;
            int sec_val = it->second;
            int diff = abs(first_val - sec_val);

            if ((n & 1) && diff == 1) { 
                cout << "Yes" << '\n';
            } 
            else if (!(n & 1) && diff == 0) { 
                cout << "Yes" << '\n';
            } 
            else {
                cout << "No" << '\n';
            }
        } 
        else {
            cout << "Yes" << '\n';
        }
    }

    return 0;
}