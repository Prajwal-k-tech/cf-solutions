#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; 
        vector<int> h(n); for(auto& it : h) cin >> it;
        int max = *max_element(h.begin(),h.end());
        int min = *min_element(h.begin(),h.end());
        cout << (max+1) - min << nl;
    }
}