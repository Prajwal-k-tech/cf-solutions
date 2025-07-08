#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: n points in a line , and m more points , provided upto r distnace
iterate through the cities find their closest tower max is the answer? */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of cities
    int m; cin >> m; //number of towers
    vector<int> a(n); for(auto& it: a) cin >> it;
    vector<int> b(m); for(auto& it : b) cin >> it; 
    //towers in a set to keep em sorted and dups gone 
    set<int> towers;
    for(int i = 0; i < m; i++){
        towers.insert(b[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){//iterate over cities 
        int cur = a[i];
        int dist = INT_MAX; 
        auto range = towers.equal_range(cur);//find upper and lower in that set 
        auto lower = range.first; 
        auto upper = range.second;//got the upper and lower bounds 
        if(lower != upper){//when they're not equal you found the exact value [,(
            dist = 0;
        } else {
            //nearest on da right
            if(lower != towers.end()){
                dist = *lower - cur;
            }
            //nearest on da left , reduce by 1 tho 
            if(lower != towers.begin()){
                lower--; //decerement pointer, this one will be lesser than cur 
                dist = min(dist, cur - *lower); //pick min from left or right 
            }
        }
        ans = max(ans, dist);
    }
    cout << ans << nl;
}