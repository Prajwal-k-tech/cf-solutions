#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: 2 players playing, n integers on board, each player in turn erases number, continues until only 1 num left , n-1 turns
first player wants to minimize number, second wants to maximize */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of numbers 
    vector<int> nums(n); //vector
    for(auto &it : nums) cin >> it;
    sort(nums.begin(),nums.end()); //sort it   
    cout << nums[(n-1)/2] << nl;   
}
