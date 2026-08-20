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
        string s; cin >> s;
        int rb=0;int lb= 0;
        for(auto i : s) if(i == '(') rb++; else lb++;
        if(rb == lb) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}