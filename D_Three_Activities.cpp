#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: winter for n days, mc wants to ski, movie, board game, ONCE , on ith day ai, bi, ci friends will join him 
maximize friends  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; //duration of holidays
        cin >> n;
        vector<pair<int,int>> ski(n);
            for(int i = 0; i < n; i++){
                int x; cin >> x;
                ski[i].first = x;
                ski[i].second = i;
            }
        vector<pair<int,int>> movie(n);
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            movie[i].first = x;
            movie[i].second = i;
        }
        vector<pair<int,int>> board(n);
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            board[i].first = x;
            board[i].second = i;
        }
        //solution, find the maxes somehow verify they are not from same day if they are from same day 
        //checck the next max for both then check max(the 2 combinations) 
        //idea take top 3 maxes along with their index, take maxes check if index 
        sort(ski.begin(),ski.end(), greater<pair<int,int>>());
        sort(movie.begin(),movie.end(), greater<pair<int,int>>());
        sort(board.begin(),board.end(), greater<pair<int,int>>());
        //brute force across the 9 possible ones         
        int ans = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (ski[i].second != movie[j].second && ski[i].second != board[k].second && movie[j].second != board[k].second) {
                        ans = max(ans, ski[i].first + movie[j].first + board[k].first);
                    }
                }
            }
        }
        cout << ans << nl;


    }
}