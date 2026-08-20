#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; int k; cin >> k;
        vector<int> sum(n,0);
        int round = 0;
        while(k > 0){
            if(round&1) for(int i = n-1; i >= 0 && k > 0; i--) sum[i] += k--;
            else for(int i = 0; i < n && k > 0; i++) sum[i] += k--;
            round++;
        }
        cout << *max_element(sum.begin(),sum.end()) << nl;
    }
}
