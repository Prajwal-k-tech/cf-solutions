#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ; cin >> s;
    unordered_map<char,int> alphabet(26);
    for(int i = 0; i < 26; i++){
        alphabet['a' + i] = i; //fill map with respecitve letter
    }
    int ans = 0;
    int last = 0;
    for(int i = 0; i < s.size(); i++){
        ans += min((int(alphabet[s[i]])) - last, 26 - ((int(alphabet[s[i]])) - last));
        last = (int(alphabet[s[i]]));
    }
    cout << ans << nl;
}