#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; 
        if(n <= 1399) cout << "Division 4" << nl;
        else if(n <= 1599) cout << "Division 3" << nl;
        else if(n <= 1899) cout << "Division 2" << nl;
        else cout << "Division 1" << nl;
    }
}