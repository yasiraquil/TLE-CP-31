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

        vector<int>v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

        int count_freq = 0 ; int last_ele = v[n - 1] ;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(v[i] == last_ele){
                count_freq++ ;
            }
        }

        if(v[0] == v[n - 1]){ // all elements same
            cout << "No" << '\n' ;
        }

        else if(count_freq == 1){ // just reverse
            cout << "Yes" << '\n' ;
            for(int i = n - 1 ; i >= 0 ; i--){
                cout << v[i] << " " ;
            }
            cout << '\n' ;

        }

        else{
            cout << "Yes" << '\n';
            // create an array
            cout << v[n-1] << " ";
            cout << v[0] << " " ;
            for(int i = n - 2 ; i >= 1 ; i--){
                cout << v[i] << " " ;
            }
            cout<< '\n' ;
        }



        


    }

    
    return 0 ;


}

