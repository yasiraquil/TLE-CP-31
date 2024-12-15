#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    int count = 0;
    while (n > 0) {
        int dig = n % 10;
        if (dig != 0) {
            count++;
        }
        n /= 10; 
    }
    return count <= 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Precompute all extremely round numbers
    vector<int> container;
    for (int i = 1; i <= 999999; i++) {
        if (check(i)) {
            container.push_back(i);
        }
    }

    // Process each test case
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ans = 0 ;
        for(int i = 0 ; i < container.size() && container[i] <= n ; i++){
            ans++ ;
        }
 
        cout << ans << '\n' ;
 
 
    }

    return 0;
}