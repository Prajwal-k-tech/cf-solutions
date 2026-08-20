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
        ll a; cin >> a; 
        ll b; cin >> b; //bomb timer 
        ll n; cin >> n; //number of tools
        vector<ll> x(n); 
        for(int i = 0; i < n; i++){
            ll inp; cin >> inp; 
            x[i] = min(a-1,inp);
        }
        ll sum = accumulate(x.begin(), x.end(), 0ll);
        cout << b + sum  << nl;
    }
}