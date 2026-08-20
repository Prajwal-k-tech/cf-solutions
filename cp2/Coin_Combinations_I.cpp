#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */
const int MOD = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n; cin >> n; //number of coins
        int x; cin >> x; //desired sum
        vector<int> c(n); for(auto& it : c) cin >> it;
        sort(c.begin(),c.end());
        vector<int> dp(x+1,0); dp[0] = 1;
        for(int i = 1; i <= x;i++){
            for(int j = 0; j < n && (c[j] <= i); j++){dp[i] = (dp[i] + dp[i-c[j]])% MOD;}
        }
        cout << dp[x] << nl;
}