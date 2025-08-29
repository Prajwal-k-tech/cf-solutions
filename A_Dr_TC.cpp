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
        int n ; cin >> n; //size of bs
        string s; cin >> s;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') count++;
        }
        cout << (n-1) * count + (n - count) << nl;
}
}