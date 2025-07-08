#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: given matrix with n rows, m columns  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int global_max = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                global_max = max(global_max, a[i][j]);
            }
        }
        //input and finding the global max lol 
        vector<pair<int,int>> pos;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == global_max){
                    pos.emplace_back(i, j);
                }
            }
        }
        //not the indices of the maxes
        bool cr = false; //initially you cant reduce 
        for(int r = 0; r < n && !cr; r++){
            unordered_set<int> cols;
            for(auto &p : pos){
                if(p.first != r){
                    cols.insert(p.second);
                    if(cols.size() > 1) break;
                }
            }
            if(cols.size() <= 1){
                cr = true;
            }//basically when I need to cover different columns, still dont understand why my 3 maxes approach didnt work 
        }
        if(cr) cout << global_max - 1 << nl;
        else cout << global_max << nl;
    }
    return 0;
}