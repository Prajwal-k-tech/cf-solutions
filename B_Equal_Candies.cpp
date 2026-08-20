#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number of boxes i have 
        vector<int> a(n); //number of candies in each box
        for(auto& it:a) cin>> it;
        auto mini = *min_element(a.begin(), a.end()); //the minimum number of candies in a box
        int sum = 0;
        for(int i = 0; i < n; i++) sum+= a[i] - mini; //the number of candies i can eat
        cout << sum << nl;

    }
}