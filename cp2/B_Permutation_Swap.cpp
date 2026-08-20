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
        vector<int> p(n); for(auto& it : p) cin >> it;
        int gcdd = abs(p[0] - 1);
        for(int i = 1; i < n; i++){
            int shift = (p[i] - (i+1));
            gcdd = gcd(shift,gcdd);
            if(gcdd == 1) break;
        }
        cout << gcdd << nl;
    }
}