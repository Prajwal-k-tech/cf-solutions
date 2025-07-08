#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: has to open lock to store treasure, n rotating disks, 0 to 9 ,  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of disks on lock
    string init; cin >> init; //state of lock when found 
    string key; cin >> key;
    //we need to print minimum number of moves required
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a = init[i] - '0';  
        int b = key[i] - '0';   //to get ints 
        int diff = abs(a - b);
        sum += min(diff, 10 - diff); //pretty easy problem ig lol 
    }
    
    cout << sum << nl;
}