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
        int k; cin >> k; 
        vector<int> a(n); for(auto& it : a) cin >> it;
        sort(a.begin(),a.end());
        int ans = 1; int res = 1;
        for(int i = 1; i < n; i++){
            if(abs(a[i] - a[i-1]) <= k) ans++;
            else ans = 1;
            res = max(ans,res);
        }
        cout << n - res << nl;
    }
}