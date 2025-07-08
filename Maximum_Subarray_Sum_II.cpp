#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given array with n integers, find max sum of values in contigous subarray with length between 
a and b  , Kadane algo maybe?
nvm apparently need prefix sums and a deque*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n; //size of array
    ll a; cin >> a; 
    ll b; cin >> b;
    vector<ll> arr(n); for(auto& it :arr) cin >> it;
    //lets do the prefix sum uhh 1 bigger and filled with 0s then sum up?
    vector<ll> prefix(n+1,0);
    for(int i = 0; i < n; i++){
        prefix[i+1] = prefix[i] + arr[i];
    }//prefix created
    ll maxSum = LLONG_MIN; //this has negative values too, so smallest possible
    multiset<ll> ms; //so, we're trying to maximize the prefix sum query in each window ie pfx[j] should be minimized
    for(int i = a; i <= n; i++){
        if(i > b) ms.erase(ms.find(prefix[i - b - 1])); //erase element if not supposed to be in window 
        ms.insert(prefix[i - a]);
        maxSum = max(maxSum , prefix[i] - *ms.begin()); //so this should minimize the thingy oh wait a set puts them in order i forgot that, thats so cool 
    }
    cout << maxSum << nl;
    //what the fuck , so i is our ending posistion 
}