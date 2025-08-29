#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: sms solved so i solve this, n rooms, ticket allows entry xi exit yi
oh he can rearrange lol    */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of vendings
    int q; cin >> q; //number of tickets 
    vector<int> a(n); for(auto& it : a) cin >> it; //amount vended
    vector<ll> freq(n+1, 0);
    //solution is find the most frequent thingies and put highest vending machines there
    //similar to coffee problem i think?
    //updating something from l to r , difference array fosho 
    for(int i = 0; i < q; i++){
        int l, r; //tickets are 1 based 
        cin >> l >> r;
        freq[l-1]++;
        freq[r]--;
    }
    for(int i = 1; i < n; i++){
        freq[i] += freq[i-1];
    }
    freq.pop_back();
    sort(a.begin(), a.end(), greater<ll>()); //descending order of money, you want most first 
    sort(freq.begin(), freq.end(), greater<ll>()); //descending order of frequency to pick largest ones first
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i] * freq[i]; //money * how many times it appears 
    }
    cout << ans << nl;
    return 0;
}