#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: */
int main(){
    ll mod = 1e9 + 7;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    vector<ll> dp(n+1);
    dp[0] = 1;
    for(int i = 1; i < n+1; i++){
    for(int j = 1; j < 7; j++){
        if(i-j >= 0) dp[i] = (dp[i] + dp[i-j]) % mod;
    }}
    cout << dp[n];
}