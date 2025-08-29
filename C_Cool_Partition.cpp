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
        int n; cin >> n; //size of array
        vector<int> a(n); for(auto& it : a) cin >> it; //the vector
        //find most frequent element duh? nvm lmao 
        set<int> prev, total; //vectors for the previous and the total 
        int ans = 0; //count of parts
        for(int i = 0; i < n; i++){
            total.insert(a[i]);
            if(prev.count(a[i])) prev.erase(a[i]);
            if(prev.size() == 0){
                ans++;
                prev = total; //give it the values in the total set
            }
        }
        cout << ans << nl;
    }
}