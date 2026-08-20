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
        string s; cin >> s;
        int half1 = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int half2 = s[3] - '0' + s[4] - '0' + s[5] - '0';
        if(half1 == half2) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}