#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; 
    int q; cin >> q; //q queries
    vector<int> a(n,0);
    int xori = 0; int opt = 0;
    while(q--){
        int op; cin >> op;
        if(op == 1){int target; cin >> target;
        int val = max(a[target] - opt,0); val++;
        xori = xori ^ val;
        cout << xori << nl;
    }
        if(op == 2){
            opt++;
            
        }
    }
}