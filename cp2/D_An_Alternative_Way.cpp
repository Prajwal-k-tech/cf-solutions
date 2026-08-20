#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:
   */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<ll> a(n); for(auto& it: a) cin >> it;
        vector<ll> b(n); for(auto& it : b) cin >> it;
        ll diff = 0;
        bool flag = true;
        for(int i = 0; i < n; i++){
            diff += b[i] - a[i];
            if(diff < 0) flag = false;
        }
        if(flag) cout << "YES" << nl; else cout << "NO" << nl;
    }
}