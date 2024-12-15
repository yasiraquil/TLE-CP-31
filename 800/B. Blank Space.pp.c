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

        int ans = 0 ; 
        for(int i = 0 ; i < n ; i++){
            int streak = 0 ;
            if(v[i] == 0){
                while(v[i] == 0 & i < n){
                    streak++ ;
                    i++ ;
                }
            }

            ans = max(ans , streak) ;
        }

        cout << ans << '\n' ;


 
    }

    return 0;
}

