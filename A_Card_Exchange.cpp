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
        int n; cin >> n; // number of cards goes up to 100
        int k; cin >> k; //from 2 to 100 duh
        vector<int> cards(n); //the cards with number
        //greedy idea, try to get a k amount of some number with every operation until well u cant 
        unordered_map<int, int> freq;
        int maxf = 0;
        for(int x : cards) {
            cin >> x;
            cards.push_back(x);
            freq[x]++;
            if(freq[x] > maxf) maxf = freq[x];
        }
        if (maxf >= k) cout << k-1 << nl;
        else cout << n << nl;
        
    }
}