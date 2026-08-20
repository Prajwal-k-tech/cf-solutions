#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; 
    vector<int> c(n); for(auto& it : c ) cin >> it; 
    unordered_map<int,int> freq;
    int   maxfreq = 0;
    for(int i = 0; i < n; i++ ){
        freq[c[i]]++; maxfreq = max(maxfreq,freq[c[i]]);
    }
    cout << n - maxfreq<< nl;
}