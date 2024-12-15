#include <bits/stdc++.h>
using namespace std;

int calc_point(int x , int y){
    if(x == 0 || y == 0 || x == 9 || y == 9){
        return 1 ;
    }

    else if(x == 1 || x == 8 || y == 1 || y == 8){
        return 2 ;
    }

    else if(x == 2 || x == 7 || y == 2 || y == 7){
        return 3 ;
    }

    else if(x == 3 || x == 6 || y == 3 || y == 6){
        return 4 ;
    }

    else{
        return 5 ;
    }

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
        vector<vector<char>>v(10, vector<char>(10)) ;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cin >> v[i][j] ;
            }
        }

        int score = 0 ;

        // now check for arrow positions
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                if(v[i][j] == 'X'){
                    score += calc_point(i , j) ;
                }
            }
        }

        cout << score << '\n' ;
        
    }

    return 0;
}

