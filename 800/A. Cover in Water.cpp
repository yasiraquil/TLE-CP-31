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

        vector<char>arr(n,'#');
        for(int i = 0 ; i < n ; i++){
            char temp ;
            cin >> temp ;

            arr[i] = temp ;
        }

        bool flag = false ;

        int count_empty = 0 ;
        for(int i = 0; i < n ; i++){
            if(arr[i] == '.'){
                count_empty++ ;
                if(arr[i + 1] == '.' && arr[i + 2] == '.' && i + 1 < n && i + 2 < n){
                    flag = true;
                    i = i + 2 ;
                }
            }
        }

        if(flag){
            cout << 2 << '\n' ;
        }
        else{
            cout << count_empty << '\n' ;
        }

    }

    return 0;
}

