#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given sorted array, k queries, print index of number  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of numbers
    int k; cin >> k; //number of queries
    vector<int> a(n); for(auto& it : a) cin >> it; //the numbers
    vector<int> q(k); for(auto& it : q) {
        cin >> it; //the queries
        auto i = lower_bound(a.begin(), a.end(),it);
        cout << i - a.begin() + 1 << nl;
    }

}