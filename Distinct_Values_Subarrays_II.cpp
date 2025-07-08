#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: array of n integers, calculate subarrays with k distinct values  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n; //size of array
    ll k; cin >> k; //at most k distinct values 
    vector<ll> a(n); for(auto& it : a) cin >> it;
    unordered_map<ll,ll> freq; //create a frequency map of elements in window
    ll left = 0; ll count = 0;
    for(ll right = 0; right < n; right++){
        freq[a[right]]++;
        while(freq.size() > k){
            freq[a[left]]--;
            if(freq[a[left]] == 0) freq.erase(a[left]);
            left++;
        }
        count += right - left + 1;
    }
    cout << count;
}