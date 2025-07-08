#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: n movies shown in festival , I know starting and ending time, scheduling? 
cph pick the one that ends fastest i think  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of movies 
    vector<pair<int,int>> movies(n); //store the movies?
    for(int i = 0; i < n; i++){
        cin >> movies[i].first >> movies[i].second;
    } 
    //now I need to sort according to the second one, ig thats why its part of sorting lol
    sort(movies.begin(),movies.end(), [](pair<int,int>& a, pair<int,int>& b){
        return a.second < b.second; //return where b is greater 
    });
    //ok next, iterate over seconds until the next ones first is < previous second
    int ans = 1;
    int ls = movies[0].second;
    for(int i = 1; i < n; i++){
        if(movies[i].first >= ls){
         ans++;
        ls = movies[i].second;}
    }
    cout << ans << nl;
}