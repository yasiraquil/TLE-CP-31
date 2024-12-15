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
        int n ,  k , x ;
        cin >> n >> k >> x ;

        if(x != 1){
            cout << "Yes" << '\n' ;
            cout << n << '\n' ;
            for(int i = 0 ; i < n ; i++){
                cout << 1 << " " ;
            }
            cout << '\n' ;

        }

        else{

            if(!(n & 1)){
                if(k >= 2){
                    cout << "Yes" << '\n' ;
                    cout << n / 2 << '\n' ;
                    for(int i = 0 ; i < n / 2 ; i++){
                        cout << 2 << " " ;
                    }
                    cout << '\n' ;
                }

                else{
                    cout << "No" << '\n' ;
                }
            }

            else{
                if(k >= 3){
                    cout << "Yes" << '\n' ;
                    cout << ( n - 1 ) / 2 << '\n' ;
                    for(int i = 0 ; i < ( n - 3 ) / 2 ; i++){
                        cout << 2 << " " ;
                    }
                    cout << 3 ;
                    cout << '\n' ;
                }

                else{
                    cout << "No" << '\n' ;
                }
            }


        }

 
    }

    return 0;
}

