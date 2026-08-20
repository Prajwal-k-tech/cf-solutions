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
        vector<int> a(n); for(auto& it: a) cin >> it;
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] == i+1 || a[n-i-1] == i+1)continue;
            else{flag = false;break;}
        }       
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}