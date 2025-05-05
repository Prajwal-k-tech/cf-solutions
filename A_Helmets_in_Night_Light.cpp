#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: n residents, share announcement with cost of p, after that residents can share with each other, cost for residents
 */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        ll n; cin >>n; //number of residents
        ll p; cin >> p; //cost of panek to share 
        vector<ll> a(n); for(auto& i : a) cin >> i; //max number of shares per resident
        vector<ll> b(n); for(auto& i : b) cin >> i; //cost for share per resident
        //input complete, need to ouput min cost to notify
        //Obviously we need p atleast once, then pick the person with least cost next make him share to as many as possible continue till done
        vector<pair<ll,ll>> residents; //we pick the lowest cost ones
        for(int i = 0; i < n; i++){
            residents.push_back({b[i], a[i]});}
            sort(residents.begin(), residents.end());
            ll result = p; //initialize with p since thats always there
            n--; //now we have 1 less
            for(auto [cost,capacity] : residents){//iterate over the vector of pairs
                if(n <= 0 || cost > p) break;
                ll shares = min(capacity,n);
                result += cost * shares;
                n -= shares;
            }
        cout << result + n*p << nl;
    }
}