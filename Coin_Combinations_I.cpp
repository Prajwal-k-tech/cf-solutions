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
    ll n; cin >> n; //number of coins
    ll x; cin >> x; //desired sum
    vector<ll> a(n); for(auto& it : a) cin >> it;//the coins
    vector<ll> dp(x+1); dp[0] = 1;
    for(ll i = 1; i < x+1;i++){
        ll best = LLONG_MAX;
        for(auto c : a){
            if(i -c >= 0) dp[i] = ((dp[i] + dp[i-c] )% mod);
        }
    }
    cout << dp[x];
}