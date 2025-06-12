#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: MC playing a game, n monsters (1 to n ) with ai hp, ability does k damage to monster with highest hp, (if several one with smallest index chosen)
if after using ability hp less than 0, monster dies , find out in which order monsters die */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number of monsters
        int k; cin >> k; //amount of damage ability does
        vector<int> monsters(n); //the hp of the mosters
        for(auto &it : monsters){
            cin >> it; //taking input for hps 
            it %= k;
            if(!it) it = k;}
        //inputs taken, already have monsters with mod values, now sort descending 
        vector<int> indices(n);
        iota(indices.begin(),indices.end(),0);
        stable_sort(indices.begin(),indices.end(), [&](int i, int j){
            return monsters[i] > monsters[j]; //sort descending without messing up the order 
        });
        for(auto &it : indices) cout << it + 1 << " ";
        cout << nl;
    }
}