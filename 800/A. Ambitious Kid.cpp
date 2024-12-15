#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input1.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output1.txt
    freopen("output.txt", "w", stdout);
#endif

    // taking inputs
    int n ;
    cin >> n ;

    vector<int>v(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
        
    int mini = INT_MAX ;        
        // solving
    for(int i = 0 ; i < n ; i++){
        mini = min(abs(v[i]) , mini) ;
    }

    cout << mini << '\n' ;


    return 0;
}

