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
        int x , k ;
        cin >> x >> k ;

        if(x % k != 0){
            cout << 1 << '\n' ;
            cout << x << '\n' ;
        }

        else{
            cout << 2 << '\n' ;
            cout << x - 1 << " " << 1 << '\n' ;
        }

 
    }

    return 0;
}

