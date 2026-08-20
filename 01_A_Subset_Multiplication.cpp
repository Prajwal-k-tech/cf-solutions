#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int x = 1;
        vector<int> b(n); for(auto& it : b) cin >> it;
        for(int i = 0; i < n-1; i++){
            int needed = b[i]/gcd(b[i],b[i+1]);
            x = lcm(x,needed);
        }
        cout << x << nl;
    }
}