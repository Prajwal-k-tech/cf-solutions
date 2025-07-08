#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: array of integers, and integer s  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int s; cin >> s;
        vector<int> nums(n); for(auto &it : nums) cin >> it;
        if(s >= nums[n-1]) cout << s - nums[0] << nl;
        else if(s <= nums[0]) cout << nums[n-1] - s << nl; 
        else cout << min((s - nums[0]) + (s - nums[0]) + (nums[n-1] - s), (nums[n-1] - s) + (nums[n-1] - s) + (s - nums[0])) << nl;
    }
}