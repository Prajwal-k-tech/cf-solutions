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
       string s; cin >> s; 
       if(s.size() & 1) cout << "NO" << nl;
       else{
           int n = s.size()/2; 
           string a = s.substr(0,n);
           string b = s.substr(n,n);
           if(a==b) cout << "YES" << nl;
           else cout << "NO" << nl;
       }
    }
}