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
        int x, y;
        cin >> x >> y;
        if(x%y == 0)cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}