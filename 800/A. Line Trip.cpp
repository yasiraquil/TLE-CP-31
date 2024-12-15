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

        int x ;
        cin >> x ;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        arr.insert(arr.begin() , 0) ;
        arr.push_back(x) ;

        int max_diff = 0;

        for(int i = 1 ; i < arr.size() ; i++){
            int diff = arr[i] - arr[i - 1] ;
            max_diff = max(max_diff , diff) ;
        }

        int round_dist = 2 * (x - arr[arr.size() - 2]) ;
        max_diff = max(round_dist , max_diff) ;

        cout << max_diff << '\n' ;
 
    }

    return 0;
}

