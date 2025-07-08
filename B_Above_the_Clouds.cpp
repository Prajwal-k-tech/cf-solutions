#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: string s, length n  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //length of string
        string s; cin >> s;
        int flag = 0;
        //Check if any character appears twice between index 1 and n-2
        unordered_set<char> seen;
        seen.insert(s[0]);
        seen.insert(s[n-1]);
        for(int i = 1; i < n-1; i++){
            if(seen.count(s[i])) {
                flag = 1;
                break;  // Found a duplicate
            }
            seen.insert(s[i]);
        }
        if(flag) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
}