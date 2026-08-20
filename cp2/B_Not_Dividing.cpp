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
        int n; cin >> n; 
        vector<int> a(n); for(auto& it: a) cin >> it; 
        if(a[0] == 1) a[0]++;
        for(int i = 1; i < n; i++){
            if(a[i] == 1) a[i]++;
            if(a[i] % a[i-1] == 0) {a[i]++;}
        }
        for(int i = 0; i < n; i++) cout << a[i] << " " ;
        cout << nl;
    }
}