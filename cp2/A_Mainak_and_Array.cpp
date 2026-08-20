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
        vector<int> a(n); for(auto& it : a) cin >> it; 
        int ans = a[n-1] - a[0];
        int maxi = *max_element(a.begin(),a.end());  int mini = *min_element(a.begin(),a.end());
        int maxf = maxi - a[0]; int maxl = a[n-1] - mini; int maxadj = INT_MIN;
        for(int i = 1; i < n; i++){
            maxadj = max(a[i-1]-a[i],maxadj);
        }   
        ans  = max({maxadj,maxf,maxl,ans});
        cout << ans << nl;
    }
}