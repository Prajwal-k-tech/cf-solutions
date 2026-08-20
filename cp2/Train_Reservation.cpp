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
        char x; cin >> x; 
        int idx = x-65;
        vector<string> s(n); for(auto& it : s) cin >> it;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(s[i][idx] == 'o') flag = true;
        }
        if(flag) cout << "Yes" << nl; else cout << "No" << nl;
    }
