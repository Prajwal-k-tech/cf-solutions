#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: prefix sums? */

ll grid[1001][1001]; //max grid size
ll ans(int x1, int y1, int x2, int y2){
        return(grid[x2][y2] - grid[x1 - 1][y2] - grid[x2][y1 - 1] + grid[x1 -1][y1 - 1]);
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q; 
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {//make everythign 1 indexed to avoid edge cases 
        string row;
        cin >> row; //take an entire row at a time 
        for(int j = 1; j <= n; j++) {
            // convert * to 1, . to 0
            int tree = (row[j-1] == '*') ? 1 : 0;
            // prefix sum 
            grid[i][j] = tree + grid[i-1][j] + grid[i][j-1] - grid[i-1][j-1];
        }
    }
    for(int i = 0; i < q; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << ans(x1, y1, x2, y2) << nl;
    }
}