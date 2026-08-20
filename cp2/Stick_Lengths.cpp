#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n; 
    vector<ll> p(n); for(auto& it : p) cin >> it;
    sort(p.begin(),p.end());
    ll median = p[n/2];
    ll ans = 0;
    for(ll i = 0 ; i < n; i++) ans += abs(p[i] - median);
    cout << ans << nl;
} 