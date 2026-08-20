#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt; cin >> tt;
    while(tt--){
        ll n; cin >> n; 
        ll q; cin >> q; 
        vector<ll> a(n); for(auto& it : a) cin >> it; 
        vector<ll> psum(n+1,0); for(ll i = 1; i < n+1; i++) psum[i] = psum[i-1] + a[i-1];
        ll sum = psum[n];
        while(q--){
            ll l,r,k; cin >> l >> r >> k;
            ll ns = sum - (psum[r] - psum[l-1]) + ((r-l+1) * k);
            if(ns&1) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }
}