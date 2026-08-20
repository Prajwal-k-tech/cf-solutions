#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s; 
    int maxi = 1;
    int run = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) run++;
        else {maxi = max(maxi,run); run = 1;}
    }
    maxi = max(maxi,run);
    cout << maxi << nl;

}