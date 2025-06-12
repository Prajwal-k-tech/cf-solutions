#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking:n prison cells in a row,  each cell has a light it can face left or right, can only light adjacent cell
light can lihgt up (i, i+1 / i, i-1) */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number of cells
        string s; cin >> s; //binary string with light info
        bool pos = true; //initially assume its possible 
        vector<bool> left(n,false); //assume its pointing right first 
        for(int i = 0; i < n; i++){
            if(s[i] == '1') continue; //we can keep going 
            if(i > 0 && s[i -1] == '1' && !left[i-1]) continue;
            if(i < n -1 && s[i+1] == '1'){
                left[i+1] = true;
                continue;
            }
            pos = false; 
            break;
        }
        if(pos) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
