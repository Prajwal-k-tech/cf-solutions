#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: alice and bob clear components, label with priority similar to the other alice bob one ig?
alice logs even gets even points bob can steal large even values maybe? */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number in array
        vector<int> a(n); for(auto& it : a) cin >> it; // the numbers
        //sort descending and pick, i was just overthinking with bob being able to pick even
        //not sure if they can pick each others values 
        sort(a.rbegin(), a.rend());
        ll alice = 0;
        ll bob = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) { //Alices turn
                if(a[i] % 2 == 0) alice += a[i]; //if even alice gets point
            }
            else {
                if(a[i]% 2 != 0) bob += a[i];
            }
        }
        if(alice > bob) cout << "Alice" << nl;
        else if(bob > alice) cout << "Bob" << nl;
        else cout << "Tie" << nl;
    }
}