#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: pick element from a, append to c, then delete from a , bob just delets something from a
game ends when a empty, score is MEX of c, alice maximize, bob minimize score  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        //alice pick lowest and add to c, bob will remove the low ones so she cant put them in c
        int n; cin >> n; //size of array 
        unordered_map<int, int> freq;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++){
            int x; cin >> x;
            a[i] = x;
            freq[a[i]]++; //freqeuency of that element increased by 1
        }

        // Alice moves first, Bob responds optimally
        int mex = 0; 
        bool ll = true; //alice gets 1 life line on things with frequency of 1 but cant do it twice 
        while(true) {
            if(freq[mex] == 0) {
                // Alice doesnt get it, take the L lmao 
                break;
            } else if(freq[mex] == 1) {
                // if Alice has her lifeline gets it else take the L 
                if(ll){
                    ll = false;
                    mex++;
                }
                else break;
            } else {
                //Alice always can pick >=2 
                mex++;
            }
        }
        
        cout << mex << nl;
    }
}