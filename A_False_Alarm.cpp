#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: long hallway, doors 1 to n , if door open 1s , yousef has button all doors open for x secs */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n;cin >> n;
        int x; cin >> x; 
        int l = INT_MAX;
        int r = -1;
        vector<int> a(n); for(auto& it: a) cin >> it;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                l = min(i,l);
                r = max(i,r);
            }
        }
        if(x >= (r-l) + 1) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}