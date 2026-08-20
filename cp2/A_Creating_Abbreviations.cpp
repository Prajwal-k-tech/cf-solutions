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
        int m; cin >> m ; 
        bool flag = true; 
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            string w; cin >> w; 
            char f = w[0];
            s.insert(toupper(f)); //add first char 
        }
        for(int i = 0; i < m; i++){
            string w; cin >> w; 
            for(int j = 0; j < w.size(); j++){
                if(!s.count(w[j])) {flag = false; break;}
            }
        }
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}