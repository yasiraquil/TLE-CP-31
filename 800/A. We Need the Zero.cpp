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

        vector<int> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        int clac_xor = 0 ;
        for(int i = 0 ; i < n ; i++){
            clac_xor ^= a[i] ;
        }

        if(n & 1){ // odd
            cout << clac_xor << '\n' ;
        }

        else{ // even
            if(clac_xor == 0){
                cout << 3 << '\n' ;
            }

            else{
                cout << -1 << '\n' ;
            }
        }
        
 
    }

    return 0;
}

