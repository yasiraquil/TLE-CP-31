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
        int x , s;
        cin >> x >> s;

        string X ;
        cin >> X ;

        string S ;
        cin >> S ;

        bool flag = false;

        int count = -1 ;

        if(X.find(S) != string::npos){
            flag = true ;
            count = 0 ;
        }

        else{
            count = 0 ;
            while(X.size() <= 25){
                X = X.append(X) ;
                count++ ;

                if(X.find(S) != string::npos){
                    flag = true ;
                    break;
                }
            }

        }

        if(flag){
            cout << count << '\n' ;
        }
        else cout << -1 << '\n' ;
        
    }

    return 0;
}

