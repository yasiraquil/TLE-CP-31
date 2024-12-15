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

        int odd_count = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(v[i] & 1) odd_count++ ;
        }

        if(odd_count & 1) cout << "No" <<'\n' ;
        else cout << "Yes" <<'\n' ;


 
    }

    return 0;
}

