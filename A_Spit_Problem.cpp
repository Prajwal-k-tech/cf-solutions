#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: We need to get reciprocal hits  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n; cin >> n; //number of camels
        vector<pair<int,int>> cameld(n); //vector with posistion and distance data
        for(int i = 0; i < n; i++){
            cin >> cameld[i].first >> cameld[i].second;
        }
        int flag = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int x1 = cameld[i].first;
                int d1 = cameld[i].second;
                int x2 = cameld[j].first;
                int d2 = cameld[j].second;
                //now we have enough data to see if they hit
                if(x1 + d1 == x2 && x2 + d2 == x1){
                    flag++;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
