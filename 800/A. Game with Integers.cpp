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

        if(n % 3 == 0){
            cout << "Second" << '\n' ;
        }

        else {
            cout << "First" << '\n' ;
        }
        
    }

    return 0;
}

