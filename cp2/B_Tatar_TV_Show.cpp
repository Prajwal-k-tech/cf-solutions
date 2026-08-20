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
        int n; cin >> n; int k; cin >> k;
        string s; cin >> s;
        bool flag  = true;
        for(int r = 0; r < k; r++){
            int count = 0;
            for(int i = r; i < n; i += k)
                count += s[i] == '1';
            if(count % 2) flag = false;
        }
        if(flag) cout << "YES" << nl; else cout << "NO" << nl;
    }
}