#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input1.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output1.txt
    freopen("output.txt", "w", stdout);
#endif

    int t ;
    cin >> t ;

    while(t--){
        // taking inputs
        int n ;
        cin >> n ;

        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

        int maxi = INT_MIN ;
        for(int i = 0 ; i < n ; i++){
            maxi = max(v[i] , maxi) ;
        }

        vector<int> b(n) ;
        for(int i = 0 ; i < n ; i++){
            b[i] = maxi - v[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            cout << b[i] + 1 << " " ;
        }

        cout << '\n' ;

    }

    return 0;
}

