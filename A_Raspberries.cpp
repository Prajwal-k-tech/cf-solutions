#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; int k; cin >> n >> k;
        vector<int> a(n); for(auto& it : a) cin >> it;
        int ans = INT_MAX; int even = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0) even++;
            if(a[i] %k == 0) ans = 0;
            ans = min(ans, k -(a[i] %k));
        }
        if(k == 4) if(even >= 2) ans = min(ans,0);
        else if(even == 1) ans = min(ans,1);
        else ans = min(ans,2);
        cout << ans << nl;
    }
}

