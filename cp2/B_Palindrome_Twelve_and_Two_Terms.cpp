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
        long long  n; cin >> n;
        if(n == 10) cout << -1 << nl;
        else if(n%12 == 10) cout << 22 << " " << n - 22<< nl;
        else cout << n%12 << " " << n - (n%12) << nl;
    }
}