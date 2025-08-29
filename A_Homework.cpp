#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: vlad can add to beginning, dima to end ,  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //length of a
        string a; cin >> a; //the string
        int m; cin >> m; //length of b and c
        string b; string c;
        cin >> b; cin >> c; //c is who adds when
        for(int i = 0; i < m; i++){
            if(c[i] == 'V') a = b[i] + a;
            else a += b[i];
        }
        cout << a << nl;

    }
}