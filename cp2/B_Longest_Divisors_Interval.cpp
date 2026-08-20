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
        ll i = 1;
        int ans = 0;
        bool flag = true;
        while(flag && i <= n){
            if(n%i == 0) ans++;
            else {flag = false; break;}
            i++;
        }
        cout << ans << nl;
    }
}