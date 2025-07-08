#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given x, make array, max size 32, elements 1, 0 or -1,  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int x; cin >> x; 
        vector<int> bits;
        if(x == 0) {
            bits.push_back(0); //base condition 
        } else {
            while(x > 0) {
                bits.push_back(x & 1);  // Get last bit 
                x >>= 1;               // Right shift the number 
            }
        }
        // so didnt read the condition about no conesutive 1s, just replce -1 at it and at i+1 but 1
        for(int i = 0; i < bits.size() - 1; i++){
            if(bits[i] == 1 && bits[i+1] == 1){
                //consecutive , cant let that happen 
                int j = i;
                bits[j] = -1; //set to -1;
                while(bits[i+1] == 1 &&  i != bits.size() -1){
                    bits[i+1] = 0;
                    i++;
                }
                if(i == bits.size() - 1) bits.push_back(1); //incase we go beyond d end
                else bits[i+1] = 1;
            }
        }
        
        cout << bits.size() << nl;
        for(int bit : bits) {
            cout << bit << " ";
        }
        cout << nl;

    }
}