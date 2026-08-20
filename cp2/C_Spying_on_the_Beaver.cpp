#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: will be every dam except most shallow one, always m-1 */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;  //<= 2 
        vector<int> p(n-1); for(auto& it : p ) cin >> it; 
        int m; cin >> m; //number of beave dams
        vector<int> a(m); for(auto& it : a) cin >> it; //beaver dams
        vector<int> d(n+1,0); //depths
        for(int i =2; i < n+1; i++){d[i] = d[p[i-2]]+1;} 
        int skip = a[0]; for(int i = 1; i < m; i++){if(d[a[i]] < d[skip]) skip = a[i];}
        cout << m-1;
        for(int i = 0; i < m; i++){if(a[i] != skip) cout << " " << a[i];}
        cout << nl;
    }
}