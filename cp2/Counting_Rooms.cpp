#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

void dfs(int i, int j,vector<vector<char>> &grid,vector<pair<int,int>> dirs){
    grid[i][j] = '#';       
    for(auto& [x,y] : dirs){ 
        int n = x + i; int m = y + j;
        if(n >= 0 && n < grid.size() && m >= 0 && m < grid[0].size() && grid[n][m] == '.'){
            dfs(n,m,grid,dirs); 
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n; cin >> n;
        int m; cin >> m; 
        vector<vector<char>> grid(n,vector<char>(m)); //my grid
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                char input; cin >> input;
                grid[i][j] = input; //filled my grid
            }
        }
        vector<pair<int,int>> dirs{{1,0}, {0,1},{-1,0},{0,-1} };
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '.'){ dfs(i,j,grid,dirs);ans++;}
            }
        }
        cout << ans << nl;

}