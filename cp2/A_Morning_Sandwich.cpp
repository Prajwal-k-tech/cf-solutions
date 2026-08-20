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
        int b; cin >> b; 
        int c; cin >> c; 
        int h; cin >> h;
        int f = c+h;
        cout << (min(b-1, f)*2 )+ 1<< nl;
    }
}