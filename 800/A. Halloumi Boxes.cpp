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
        int n , k ; 
        cin >> n >> k ;

        vector<int>arr(n,0);
        for(int i = 0 ; i < n ; i++){
            int temp ;
            cin >> temp ;

            arr[i] = temp ;
        }

        bool flag = true;

        for(int i = 0 ; i < n - 1 ; i++){
            int curr = arr[i] ;
            int nxt = arr[i + 1] ;
            if(curr > nxt){
                if(k == 1){
                    flag = false ;
                }
            }
        }

        if(flag){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }

    }

    return 0;
}

