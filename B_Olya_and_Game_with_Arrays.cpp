#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Game suggested to olya, list of n arrays, ith array contains mi >= 2 positive integers
Need to output the max beauty  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number of arrays
            vector<ll> s_e; //second elements
            ll lfm = INT_MAX; //lowest first minimum 
            for(int i = 0; i < n; i++){
                ll m; cin >> m; //length of approaching array
                vector<ll> a(m); //create approachign array 
                for(auto &x : a) cin >> x; //take in its values 
                sort(a.begin(), a.end()); //sorting the array
                s_e.push_back(a[1]); //second element pushed in
                lfm = (min(lfm, a[0])); //update lfm 
            }
            sort(s_e.begin(),s_e.end());
            ll sse = accumulate(s_e.begin(), s_e.end(), 0ll); //sum of second elements
            ll lsm = s_e[0]; //lowest second member
            cout << lfm + (sse - lsm) << nl; //this should be the answer 
    }

}