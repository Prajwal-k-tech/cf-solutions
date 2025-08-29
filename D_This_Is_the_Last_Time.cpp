#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: n casinos  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //casinos
         ll k; cin >> k; //coins
        vector<tuple<ll,ll,ll>> casinos(n); //data 
        for(int i = 0; i < n; i++){
            ll l, r, real;
            cin >> l;
            cin >> r;
            cin >> real;
            casinos[i] = {l, r, real};
        }
        sort(casinos.begin(),casinos.end(),[](auto &l, auto &r){
            return get<0>(l) < get<0>(r); //sort by starting requirement 
        });
        priority_queue<pair<ll,ll>> pq;//get largest real 
        ll coins = k; //couns we have
        int i = 0;
        while (true) {
            //add casinos l <= coins
            while(i < n && get<0>(casinos[i]) <= coins){
                pq.push({get<2>(casinos[i]), get<1>(casinos[i])});
                i++;
            }
            bool played = false;
            //pick heightest reali, top of pq 
            while(!pq.empty()) {
                auto [realv, rv] = pq.top();
                //cant enter/ no increase 
                if (rv < coins || realv <= coins) {
                    pq.pop();
                    continue;
                }
                // play and increase coins
                coins = realv;
                pq.pop();
                played = true;
                break;
            }
            if(!played) break;
        }
        cout << coins << nl;
    }
}