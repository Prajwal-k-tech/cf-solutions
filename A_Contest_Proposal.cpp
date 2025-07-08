#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: n problems , i difficulty at most bi, there are already n problem proposals  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number of problems
        vector<int> a(n); for(auto &it : a) cin >> it;
        vector<int> b(n); for(auto &it : b) cin >> it;
        int ans = 0;
        //so whenever we get something greater add to diff?
        for(int i = 0; i < n; i++){
            if(a[i - ans] > b[i]) ans++;
        }
        cout << ans << nl;
    }
}