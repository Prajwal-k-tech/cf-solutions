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
        int m; cin >> m;  //number of mountains
        vector<int> a(n); for(auto& it : a) cin >> it; 
        vector<int> b(m); for(auto& it : b) cin >> it; 
        int asum = a[n-1]; int bsum = b[m-1];
        for(int i = 0 ; i < n-1; i++){
            asum += (a[i] - a[i+1])+1;
        }
        for(int i = 0; i < m-1; i++){
            bsum += (b[i]- b[i+1])+1;
        }
        if(asum >= bsum) cout << 1 << nl;
        else cout << 2 << nl;

    }
}