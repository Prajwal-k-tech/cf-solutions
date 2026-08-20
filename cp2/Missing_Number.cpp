#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        long long  n; cin >> n; 
        vector<int> a(n-1); for(auto& it : a) cin >> it;
        ll sum = accumulate(a.begin(),a.end(),0LL);
        cout << (n*(n+1) /2 )-sum << nl;
}