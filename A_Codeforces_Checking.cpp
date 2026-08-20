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
        char c; cin >> c;
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's') cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}