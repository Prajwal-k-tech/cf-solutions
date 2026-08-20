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
        int n; cin >> n; //sequence size
        vector<int> b(n); for(auto& it : b) cin >> it; 
        sort(b.begin(),b.end(),greater<int>());
        if(n == 2) cout << b[0] << " " << b[1] << nl;
        else{
        bool flag = true;
        for(int i = 0; i < n-2;i++){
            if(b[i+2] != b[i] % b[i+1]){flag = false; break;} 
        }
        if(flag) cout << b[0] << " " << b[1] << nl; 
        else cout << -1 << nl;}
    }
}