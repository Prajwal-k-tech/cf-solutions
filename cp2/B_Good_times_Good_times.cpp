#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        string x; cin >> x; // take as string 
        string y = "1" + string(x.size() - 1,'0') + "1";
        cout << y << nl;
    }
}
