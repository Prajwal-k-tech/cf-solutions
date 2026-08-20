#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n; cin >> n; 
        vector<pair<int, int>> a(n); for(auto& [h,l] : a) cin >> h >> l;
        vector<int> suf(n);
        suf[n-1] = a[n-1].first;
        for(int i = n-2; i >= 0; i--){suf[i] = max(suf[i+1], a[i].first);}
        int q; cin >> q;
        while(q--){
            int t; cin >> t;
            int idx = upper_bound(a.begin(),a.end(),t,[](int t, auto& p){return t < p.second;}) - a.begin();
            cout << suf[idx] << nl;
        }
    }
