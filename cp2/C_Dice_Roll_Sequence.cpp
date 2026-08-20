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
        int ans = 0 ; 
        for(int i = 1 ; i < n; i++){
            if(a[i-1] + a[i] == 7 || a[i] == a[i-1]) {ans++; i++;}
        }
        cout << ans << nl;
    }
}