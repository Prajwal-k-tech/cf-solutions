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
        int n; cin >> n; //number of players
        string s; cin >> s; //binary string length n-1, 
        int x = 1; 
        while(x< n && s[x-1]=='1') x++;
        cout << x << nl;
        
    }
}