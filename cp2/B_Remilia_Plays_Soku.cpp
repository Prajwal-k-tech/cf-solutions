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
        int n,x1,x2,k; cin >> n >> x1 >> x2 >> k;
        if(n == 2){cout << 1 << nl; continue;}
        if(n == 3){cout << 1 << nl; continue;}
        cout << min(abs(x1-x2), n-abs(x1-x2)) + k  << nl;
    }
}