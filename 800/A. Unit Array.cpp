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
        for(int i =  0 ; i < n ; i++){
            cin >> v[i] ;
        }

        int pos = 0 ; 
        int neg = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(v[i] == -1) neg++ ;
            else pos++ ;   
        }

        if(pos >= neg){
            if(neg & 1) cout << 1 << '\n' ;

            else cout << 0 << '\n' ; 
        }

        else{
            int temp = neg - n / 2 ;
            if(n/2 & 1) cout << temp + 1 << '\n' ;
            else{
                cout << temp << '\n' ; 
            }

        }

 
    }

    return 0;
}

