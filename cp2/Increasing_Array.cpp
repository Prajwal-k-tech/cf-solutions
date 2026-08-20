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
        vector<ll> a(n); for(auto& it : a) cin >> it; 
        ll ans = 0; 
        for(ll i = 1; i < n; i++){
            if(a[i] < a[i-1]) {ans+=a[i-1] -a[i]; a[i] = a[i-1];}
        }
        cout << ans << nl;
}