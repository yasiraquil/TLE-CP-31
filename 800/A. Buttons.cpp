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
        int a , b , c ; 
        cin >> a >> b >> c ;

        if(!(c & 1)){ // c is even
            if(a > b ) cout << "First" << '\n' ;

            else cout << "Second" << '\n' ;
        }

        else{
            int anna_part = c / 2 + 1 ;
            int katty_part = c - anna_part ;

            anna_part = anna_part + a ;
            katty_part = katty_part + b ;

            if(anna_part > katty_part){
                cout << "First" << '\n' ;
            }

            else{
                cout << "Second" << '\n' ;
            }

        }

 
    }

    return 0;
}

