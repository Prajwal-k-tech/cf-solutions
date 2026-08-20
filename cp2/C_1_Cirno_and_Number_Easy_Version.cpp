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
        string a; cin >> a;
        ll an = stoll(a);
        int n; cin >> n; 
        vector<int> d(n); for(auto& it : d) cin >> it ;
        //build the number from below 
        int num = 0;
        const int N = a.size();
        sort(d.begin(), d.end());
        int res = 0;
        for(int i = 0; i < N; i++){
            ll l = d[0] * pow(10, (N-1)-i);
            ll r = d[1] * pow(10, (N-1)-i);
            ll final_l = res + l;
            ll final_r = res + r;
            int last;
            if(abs(final_l - an) < abs(final_r - an))last = final_l;
            else last = final_r;
            res = last;
        }
        int res2 = 0;
        for(int i = 0; i < N; i++){
            ll l = d[0] * pow(10, (N-1)-i);
            ll r = d[1] * pow(10, (N-1)-i);
            ll final_l = res + l;
            ll final_r = res + r;
            int last;
            if(an-final_l < 0 && an-final_r < 0)continue;

            res = last;
        }
        cout << an-res << nl;
    }
}