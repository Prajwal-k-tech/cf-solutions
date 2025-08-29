#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        ll n; cin >> n;
        vector<ll> ans;
        for(ll p = 10; p <= n; p*= 10){
            ll d = p + 1;
            if (n % d == 0)  ans.push_back(n/d);
        }
        if(ans.empty()) cout << 0 << nl;
        else{
            reverse(ans.begin(), ans.end());
            cout << ans.size() << nl;
            for(ll i : ans) cout << i << " ";
            cout << nl;
        }
    }
}