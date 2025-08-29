#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: some troy bs , n myrs, i behind i -1 , 0th first , can endure ai
zeus brings them back wtf? 
seems obvious so clearly obvious one is TLE, prefix sum to query people dying then binary search correfct prefix?*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; // number of myrmidons
    int q; cin >> q; // minutes of battle
    vector<ll> a(n); //2* 10*5 mins just spam ll 
    for(auto& it: a) cin >> it;
    vector<ll> prefix(n);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++) prefix[i] = prefix[i-1] + a[i]; //prefix sum 
    vector<ll> k(q); //hectors attacks 
    for(int i = 0; i < q; i++) cin >> k[i];
    ll sum = 0;
    for(int i = 0; i < q; i++){
        sum += k[i];
        if(sum >= prefix[n-1]){
            // all die just rev 
            cout << n << nl;
            sum = 0; 
        } else {
            //total - fallen , binary search 
            int fallen = upper_bound(prefix.begin(), prefix.end(), sum) - prefix.begin();//search for first one greater or equal 
            cout << (n - fallen) << nl;
        }
    }
}