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
        vector<int> a(n); for(auto& it : a) cin >> it; 
        bool flag = true;
        int ans = 0; 
        for(int i = 0; i < n-1; i++){
            if(a[i] >= a[i+1] && a[i] > 0 ){
                while(a[i] >= a[i+1] && a[i] > 0) {a[i] = a[i]/2; ans ++; } i = 0; //reset i
            }
        }
        for(int i = 0; i < n-1; i++){
            if(a[i] >= a[i+1]) {flag = false; break;}
        }
        if(flag) cout << ans << nl;
        else cout << -1 << nl;
    }
}
