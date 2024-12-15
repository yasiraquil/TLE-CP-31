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

        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

        vector<int> ans ;
        ans.push_back(v[0]) ;

        int smaller_ele = 0 ;
        for(int i = 1 ; i < n ; i++){
            if(v[i] < v[i - 1]){
                smaller_ele++ ;
                ans.push_back(v[i]) ;
                ans.push_back(v[i]) ;
            }
            else{
                ans.push_back(v[i]) ;
            }
        }

        cout << n + smaller_ele << '\n' ;
        for(int i = 0 ; i < ans.size() ; i++){
            cout << ans[i] << " " ;
        }

        cout << '\n' ;

    }

    
    return 0 ;


}

