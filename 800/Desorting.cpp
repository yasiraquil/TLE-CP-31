#include <bits/stdc++.h>
using namespace std;

// Aliases
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// Macros
#define all(v) (v).begin(), (v).end()
#define sz(v) ((int)(v).size())
#define pb push_back
#define F first
#define S second

// Debugging (Enable only during local testing)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// Fast IO
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Modular Arithmetic
ll mod_add(ll a, ll b, ll m = MOD) { return (a + b) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return (a - b + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return (a * b) % m; }
ll mod_exp(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

// Input/Output Helpers
template <typename T>
void print_vec(const vector<T>& v) {
    for (const T& x : v) cout << x << " ";
    cout << "\n";
}

template <typename T>
void read_vec(vector<T>& v) {
    for (T& x : v) cin >> x;
}

int isSorted(vi a){
    for(int i = 1 ; i < a.size() ; i++){
        if(a[i] < a[i - 1]) return false ;
    }
    return true ;
}

// Main Function
int main() {
    fast_io();

#ifndef ONLINE_JUDGE
    // For debugging (input from file)
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; // Test cases
    cin >> t;
    while (t--) {
        // Example Problem Logic
        int n;
        cin >> n;
        vi a(n);
        read_vec(a);

        if(!isSorted(a)){
            cout << 0 << '\n' ;
        }

        // find min difference first
        else{
            
            int min_diff = INT_MAX ;
            for(int i = 1 ; i < n ; i++){
                int diff = abs(a[i] - a[i - 1]) ;
                min_diff = min(min_diff , diff) ;
            }

            cout << min_diff/2 + 1  << '\n' ;

        }
        
    }

    return 0;
}