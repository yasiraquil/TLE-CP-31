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

        int total_2s = 0 ;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
            if(v[i] == 2){
                total_2s++ ;    
            }
        }

        int left_2s = 0 ; int found = -1 ;
        for(int i = 0 ; i < n ; i++){
            if(v[i] == 2){
                left_2s++ ;
            }

            int right_2s = total_2s - left_2s ;
            if(left_2s == right_2s){
                found = i + 1 ;
                break ;
            }
        }

        cout << (found == -1 ? -1 : found) << '\n';

        


    }

    
    return 0 ;


}

