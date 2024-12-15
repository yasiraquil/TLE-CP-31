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
        int a , b , c , d ;
        cin >> a >> b >> c >> d ;

        int steps  = 0 ;

        if(b > d){
            cout << -1 << '\n' ;
        }

        else{
            // we always first match the y coordinate
            int diff_y = d - b ;
            int new_x = a + diff_y ;

            if(c > new_x) cout << -1 << '\n' ;

            else{
                int diff_x = new_x - c ;
                steps = diff_y + diff_x ;
                cout << steps << '\n' ; 
            }

        }


 
    }

    return 0;
}

