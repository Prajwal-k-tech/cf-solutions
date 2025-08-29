#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: will recieve coins adding upto n , s be sum in any subset they recieve,  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n; //sum of coins to be given 
    //minimum coins satisfying condition 
    //10^9 so ll ig?
    //so stupid just 2 pointer pick largest then smallest 
    //oh shit, read problem wrong lmao need to create every number from 1 to n
    ll sum = 0; 
    ll ans = 0;
    while(sum < n){
        ll coin = min(sum + 1, n - sum); // pick smallest missing or remaining to exactly reach n
        sum += coin;
        ans++;
    }
    cout << ans << nl; 
}