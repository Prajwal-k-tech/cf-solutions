#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n; 
    ll mod = 1e9 + 7;
    vector<vector<char>> grid(n,vector<char>(n));
    for(auto& r : grid){
        for(auto& it : r) cin >> it;
    }
    vector<vector<ll>> dp(n,vector<ll>(n,0));
    if(grid[0][0] == '.') dp[0][0] = 1;
    for(ll j = 1; j < n; j++){
        if(grid[0][j] == '*') continue;
        dp[0][j] = dp[0][j] + dp[0][j-1] % mod;
    }
    for(ll i = 1; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(grid[i][j] == '*' ) continue;
            ll left = (j > 0) ? dp[i][j-1] : 0;
            dp[i][j] = (dp[i][j] + dp[i-1][j] + left) % mod;
        }   
    }
    cout << dp[n-1][n-1];
}