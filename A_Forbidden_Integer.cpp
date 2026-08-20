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
        int n,k,x; cin >> n >> k >> x; 
        if(x != 1){cout << "YES" << nl;
            cout << n << nl;
        for(int i = 0; i < n; i++) {cout << 1 << " "; }cout << nl;}
        else if(k == 1 || (k == 2 && n&1)) cout << "NO" << nl;
        else{cout << "YES" << nl;
            cout << n/2 << nl;
            if(n&1) cout << 3 << " "; else cout << 2 << " ";
            int loop = (n/2) - 1;
            for(int i = 0; i < loop; i++) cout << 2 << " ";
            cout << nl;
        }
    }}