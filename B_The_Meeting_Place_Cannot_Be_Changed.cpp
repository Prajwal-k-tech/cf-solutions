#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: coordinates from sout to north , alogn road n friends ,at point xi moving at speed vi 
find min point for them to meet, (does not have to be int)  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of friends 
    vector<int> x(n); //coordinates 
    vector<int> v(n); //speeds 
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> v[i];
    //need to output min time for them to meet 
    //is it best to meet at the middle or something?
    //could have just gone upwards from seconds but they aint ints so 
    //uhh you can find the ranges they move that should create some sort of monotonic bs I can bs?
    //right most of left end should come before left most of right ends 
    double l = 0, r = 1e9; //highest and lowest time 
    for(int iter = 0; iter < 100; iter++){ //binary search should take like 100 max
        double mid = l + (r- l) / 2; 
        // Check if they can meet at time mid
        double L = -1e9, R = 1e9; 
        for(int i = 0; i < n; i++){
            L = max(L, x[i] - v[i] * mid);
            R = min(R, x[i] + v[i] * mid); //verifying if they can overlap 
        }
        if(L <= R){
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << fixed << setprecision(6) << l << nl;
    return 0;
}