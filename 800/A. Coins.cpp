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
        long long n , k ; 
        cin >> n >> k ;

        long long x = 0 , y = 0 ;

        if( !(n & 1) ){
            cout << "Yes" << '\n' ;
        }

        else{
            if(!(k & 1)){
                cout << "No" << '\n' ;
            }
            else{
                if( k > n){
                    cout << "No" << '\n' ;
                }

                else{
                    cout << "Yes" << '\n' ;
                }
            }
        }
 
    }

    return 0;
}

