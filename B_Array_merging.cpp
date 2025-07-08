#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: 2 arrays a and b , merge and form c  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
            ll n; //length of a and b
            cin >> n;
            vector<ll> a(n); for(auto &it : a) cin >> it;
            vector<ll> b(n); for(auto &it : b) cin >> it;
            //input taken, looking for an O(n) ish solution
            //solution should actually be fidning longest contigous group of 
            unordered_map<int,int> freqA, freqB;
            
            // Count contiguous segments in array A
            int currentLen = 1;
            for(int i = 1; i < n; i++){
                if(a[i] == a[i-1]) {
                    currentLen++;
                } else {
                    freqA[a[i-1]] = max(freqA[a[i-1]], currentLen);
                    currentLen = 1; //there can be diff sub sequences u want the biggest 
                }
            }
            freqA[a[n-1]] = max(freqA[a[n-1]], currentLen); // Handle last segment
            
            // Count contiguous segments in array B
            currentLen = 1;
            for(int i = 1; i < n; i++){
                if(b[i] == b[i-1]) {
                    currentLen++;
                } else {
                    freqB[b[i-1]] = max(freqB[b[i-1]], currentLen);
                    currentLen = 1;
                }
            }
            freqB[b[n-1]] = max(freqB[b[n-1]], currentLen); // Handle last segment
            
            // Find maximum combined length
            int maxLen = 0;
            set<int> allElements;
            for(int x : a) allElements.insert(x);
            for(int x : b) allElements.insert(x);
            
            for(int element : allElements) {
                maxLen = max(maxLen, freqA[element] + freqB[element]);
            }
            
            cout << maxLen << nl;
    }

}