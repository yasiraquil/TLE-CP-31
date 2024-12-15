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
        int n;
        cin >> n ;

        vector<int> v(n) ;
        int min_ele = INT_MAX ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
            min_ele = min(min_ele , v[i]) ;
        }

        if(v[0] != min_ele){
            cout << "No" << '\n' ;
        }

        else{
            cout << "Yes" << '\n' ;
        }


        
    }

    return 0;
}

