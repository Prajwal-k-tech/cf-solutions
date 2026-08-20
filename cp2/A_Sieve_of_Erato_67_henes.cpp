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
        int n; cin >> n; 
        vector<int> a(n); for(auto& it: a) cin >> it;
        ll product = 1; for(int i = 0; i < n; i++) product *= a[i];
        if(product % 67 == 0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}