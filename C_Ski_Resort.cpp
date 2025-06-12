#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: math teacher on vacation for n days, wants to go ski consecutive days atleast k , 
given array a with forecasts, can only go if temp does not go above q degrees, count num of ways to go to resort
(diff permutations)*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //total days
        int k; cin >> k; //num of ski days
        int q; cin >> q; //temp limit
        vector<int> a(n); 
        for(auto &it : a){
            cin >> it;
            if(it > q) it = 0;
            else it = 1;
        } //taking input for temps
        //we can solve with count and reset technique
        ll ans = 0;
        int count = 0; 
        for(int i = 0; i < a.size() ; i++){
        if(a[i] == 1) count++;
        else{if(count >= k){
            ll diff = count - k + 1;
            ans += (diff * (diff + 1)) / 2;
            }
            count = 0; //reset either way when non 0 
        }           
    }
    if(count >= k){
            ll diff = count - k + 1;
            ans += (diff * (diff + 1)) / 2;
            }
            cout << ans << nl;
}
}