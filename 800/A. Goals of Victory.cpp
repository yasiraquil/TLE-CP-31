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


        int sum = 0 ;
        for(int i = 0 ; i < n - 1 ; i++){
            int temp ; 
            cin >> temp ;
            sum += temp ;
        }

        int ans = -1 * sum ;

        cout << ans << '\n' ;
        
    }

    return 0;
}

