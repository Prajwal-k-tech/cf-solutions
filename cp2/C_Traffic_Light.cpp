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
        char c; cin >> c; 
        string s;  cin>>s;
        s = s+s; n = n*2;
        ll lgi = -1; ll ans = INT_MIN;
        for(int i = n-1; i >=0; i-- ){
            if(s[i] == 'g') lgi = i;
            if(s[i] == c) ans = max(ans,lgi-i);
        }
        cout << ans << nl;
    }
}