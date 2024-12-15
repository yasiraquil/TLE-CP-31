#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input1.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output1.txt
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        // Input validation
        if (n == 0) {
            cout << 0 << '\n';
            continue;
        }

        string s ;
        cin >> s ;

    
        int left = 0, right = n - 1;
        while (left < right && (s[left] != s[right])) {
            left++;
            right--;
        }

        cout << (right - left + 1) << '\n';
    }
    
    return 0;
}