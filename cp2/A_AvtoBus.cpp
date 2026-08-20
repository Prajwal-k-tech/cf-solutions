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
        ll n; cin >> n ;
        if((n%2 == 0) && (n != 2)){ n = n/2; 
        cout << (n+2) / 3 << " " << n/ 2 << nl;}
        else cout << -1 << nl;
    }
}