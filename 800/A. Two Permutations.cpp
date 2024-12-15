#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n , a , b ;
        cin >> n >> a >> b ;

        if((n==a && a==b) || n==1) cout<<"YES"<<endl;

        else{
            if(n-(a+b) >= 2){
                cout << "Yes" <<'\n' ;
            }
            else{
                cout << "No" << '\n' ;
            }
        }

        

    }

    return 0;
        
}