#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: vanya and vova playing, players given integer n, on their turn player can add 1 or -1, Vanya Starts if next move n % 3 == 0
Vanya wins, if 10 moves pass, she loses (Vova wins) 
Output who wins with n as input*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
       int n; cin >> n;
       //First if Vanya wins, Second if Vova wins
       if(n%3 == 0) cout <<  "Second" << '\n';
       else cout << "First" << '\n'; 
    }
}