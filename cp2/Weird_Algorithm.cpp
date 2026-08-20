#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  n; cin >> n; 
    while(n != 1){
        cout << n << " " ;
        if(n&1) n = (3*n )+ 1;
        else n = n/2;
    }
    cout << 1 << nl;
 
}