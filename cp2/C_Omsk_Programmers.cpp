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
        int a, b, x; cin >> a >> b >> x;
        int ans = INT_MAX;
        for(int aa = a, i = 0; i <= 36; i++){
            for(int bb = b, j = 0; j <= 36; j++){
                ans = min(ans, i + j + abs(aa - bb));
                if(bb == 0) break;
                bb /= x;
            }
            if(aa == 0) break;
            aa /= x;
        }
        cout << ans << nl;
    }
}