#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: word with 3 lowercase latin letters,  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //encoded word
        //small inputs ig i can just bruteforce?
        string init = "aaa"; //lowest possible is this ig
        n -= 3; //automatically we lose 3 
        while(n > 0){
        for(int i = 2; i >= 0; i--){
            if(n >= 26){
             init[i] = 'z';
             n -= 25; //25 from a , using 26 was stupid u idiot 
            }
            else{
                    init[i] = 'a' + (n); //to get appropriate letter 
                    n = 0;
            }
        }
    }
    cout << init << nl ; //lets go, brute force bad 
    }
}