#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: string s, length n , consisting of characters A nd B 
if you see 'AB' you can swap them  find max operations */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //length of string
        string s; cin >> s; //the string
        //All A no operation, All B no operation, ALl Bs behind no operation 
      int ans = n-1;
      //trailing As useless
      for(int i = n-1; i >= 0; i--) if(s[i] == 'A')ans--; else break; //gets rid of trailing As
      for(int i = 0; i < n; i++) if(s[i] == 'B') ans--; else break; //gets rid of leading Bs
      if(ans >= 0) cout << ans << nl; //edge case dealth with 
      else cout << 0 << nl; //if it goes negative 
    }
}