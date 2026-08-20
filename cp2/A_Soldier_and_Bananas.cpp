#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k; cin >> k; //dollars for first
    int n; cin >> n; //he has n
    int w; cin >> w; //bananas
    int sum = (w * (w+1) )/2 ;
    int ans = (k*sum) - n;
    if(ans < 0) cout << 0 << nl; 
    else cout << ans << nl; 
}