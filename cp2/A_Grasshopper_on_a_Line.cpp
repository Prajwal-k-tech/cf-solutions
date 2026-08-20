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
        int x; cin >> x; int k; cin >> k ;
        if(x % k == 0){cout << 2 << nl; cout << 1 << " " << x-1 << nl;}
        else {cout << 1 << nl; cout << x << nl;}
    }
}