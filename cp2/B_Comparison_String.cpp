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
        int n; cin >> n ;
        string s; cin >> s; 
        int maxcon = 1; int con = 1; 
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]) con++;
            else con = 1;
            maxcon = max(con,maxcon);
        }
        cout << maxcon+1 << nl;
    }
}