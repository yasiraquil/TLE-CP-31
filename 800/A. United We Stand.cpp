#include <bits/stdc++.h>
#include<map>
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

        // o/p -1 : only when all the elements will be same.

        // lets make two different vectors a and b
        vector<int> a ;
        vector<int> b ;

        map<int , int> mp ;
        for(int i = 0 ; i < n ; i++){
            mp[v[i]]++ ;
        }

        if(mp.size() == 1){
            cout << -1 << '\n' ;
        }

        else{
            auto it = mp.begin() ;
            int freq = it->second ;
            while(freq--){
                a.push_back(it->first) ;
            }
            mp.erase(it->first) ;

            
            for(auto it : mp){
                for(int i = 0 ; i < it.second ; i++){
                    b.push_back(it.first) ;
                }
            }
            
            cout << a.size() << " " << b.size() << '\n' ;
            for(int i = 0 ; i < a.size() ; i++){
                cout << a[i] << " " ;
            }
            cout << '\n' ;
            for(int i = 0 ; i < b.size() ; i++){
                cout << b[i] << " " ;
            }

            cout << '\n' ;

        }


    }

    
    return 0 ;


}

