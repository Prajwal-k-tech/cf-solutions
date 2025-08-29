#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of batches
    vector<int> a(n); for(auto& it : a) cin >> it; //students in aith batch
    int m; cin >> m; //whose batch you want to find
    vector<int> b(m); for(auto& it : b) cin >> it;
    vector<int> pref(n+1,0); 
    for(int i = 1; i < pref.size(); i++){
        pref[i] = pref[i-1] + a[i-1]; 
    }
    for(int i = 0; i < m; i++){
        auto it = lower(pref.begin(),pref.end(),b[i]);
        int idx = it - pref.begin();
        cout << idx << nl;
    }
        
}