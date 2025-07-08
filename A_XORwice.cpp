#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given 2 integers a and b, output smallest a ^ x + b ^ x for any x  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int a; cin >> a;
        int b; cin >> b;
        cout << (a ^ (a & b)) + (b  ^ (a & b)) << nl; //fidn the ones common between them to reduce by the most 
    }
}