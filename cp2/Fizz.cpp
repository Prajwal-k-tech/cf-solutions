#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n; cin >> n; 
        for(int i = 1; i <= n; i++){
        if(i%3 == 0) cout << "Fizz" << nl;
        else cout << i <<  nl;}
}