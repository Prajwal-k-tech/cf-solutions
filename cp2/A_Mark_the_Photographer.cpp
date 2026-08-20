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
        int x; cin >> x; 
        vector<int> h(2*n); for(auto& it : h) cin >> it;
        sort(h.begin(),h.end());
        bool flag = true; 
        for(int i = 0; i < n; i++){
            if(h[i+n] - h[i] < x) flag = false;
        }
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}