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
        int n , k ;
        cin >> n >> k ;

        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

        if(find(v.begin(),v.end(),k) != v.end()){
            cout << "Yes" << '\n' ;
        }

        else{
            cout << "No" << '\n' ;
        }
    }

    return 0;
}

