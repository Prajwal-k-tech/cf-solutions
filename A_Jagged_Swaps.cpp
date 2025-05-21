#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given a permuation a of size n, 
can select index i from 2 to n -1,
needs to be greater than previous and after , swap ai and ai+1, 
can it be sorted!?*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; //3 to 10
        cin >> n;
        vector<int> perm(n); //the elements 
            //Descending, impossible to sort 
            //first element must be 1
            for(auto& it : perm) cin >> it;
            if(perm[0] != 1) cout << "NO" << nl;
            else cout << "YES" << nl;
    }
}