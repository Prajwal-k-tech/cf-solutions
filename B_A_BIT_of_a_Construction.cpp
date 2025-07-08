#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given n and k , summation needs to be = k , numbers of 1s when or Is Maximized   */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //size of array
        int k; cin >> k; //target sum 
        //get 2^n - 1 always?
        //edge cases , if 1 cout << k , 
        if(n == 1) cout << k << nl; 
        else {
            int msb = 0;
            while((1 << (msb + 1)) <= k) msb++;
            int num = (1 << msb) - 1; //this number will maximize ors
            cout << num << " ";
            cout << k - num << " ";
            n -= 2; //we added 2 nums
            while(n--) cout << 0 << " ";
            cout << nl;
        }
    }
}