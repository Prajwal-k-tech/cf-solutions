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
        int a; cin >> a;
        int b; cin >> b; //number of 1s
        while(a > 0 | b > 0){
            if(a > 0){ 
                cout << '0';
                 a--;}
            if(b > 0){ 
                cout << '1';
                b--;}
        }
        cout << nl;
    }
}