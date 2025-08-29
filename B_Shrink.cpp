#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: shrink operation defined as 
choose anything thats not the start or the end, needs to be greater than previous and after  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n ; cin >> n; //size of the permutation 
        int start = 2;
        if(n == 3) cout << 2 << " " << 3 << " " << 1 << nl;
        else{
            for(int i = 0 ;i < n - 1; i++){
                cout << start << " ";
                start++;
            }
            cout << 1 << nl;
        }
    }
}