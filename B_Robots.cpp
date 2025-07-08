#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: field, n*m grid empty denoted with E, robot with R , send command to all robots, move NSEW, 
Make 1 reach upper left corner without making any explode  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int m; cin >> m; 
        //Note, max 5x5
        //idea, so obviously moves towards solution are up and left
        //most moves up will be first bot in row, most moves left will be first bot in column
        //just check if there is  a bot at i, j and we should have the answer 
        vector<string> grid(n);
        for(int i = 0; i < n ; i++){
            cin >> grid[i]; //take in the word for that row ig?
        }
        //input taken
        int mini = 6;
        int minj = 6;  //choosing 6 cuz they cant be 6 lol 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 'R') {
                    mini = min(mini,i);
                    minj = min(minj,j);
                }
            }
        }
        if(grid[mini][minj] == 'R' || grid[0][0] == 'R') cout << "YES" << nl;
        else cout << "NO" << nl;

    }
}