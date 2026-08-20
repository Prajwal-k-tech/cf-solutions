#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */
const  ll MOD  = 1e9 +7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; 
    vector<int> dp(n+1,0); dp[0] = 1;
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < 7 && j <= i ; j++) dp[i] =  (dp[i-j]+ dp[i]) % MOD;
    }
    cout << dp[n] << nl;

}