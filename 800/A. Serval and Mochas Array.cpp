#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a ;
    return gcd(b,a%b) ;
}

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

        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

        // we just have to check if gcd of first two is <= 2 or not , if yes
        // then all the further seq will follow the condition.
        bool flag = 0 ;
        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(gcd(v[i] , v[j]) <= 2){
                    flag = 1 ; 
                }
            }
        }

        if(flag == 1){
            cout << "Yes" << '\n' ;
        }

        else{
            cout << "No" << '\n' ;
        }
    }

    
    return 0 ;


}

