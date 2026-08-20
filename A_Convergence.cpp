#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; //number of friends alice has 
        vector<int> a(n); for(auto& it : a) cin >> it; //locations of her friends
        sort(a.begin(),a.end()); //sort it 
        int median = a[n/2];
        int bm = 0; int am = 0;
        for(int i = 0; i < n;i++){if(a[i] != median && i < n/2) bm++; 
            if(a[i] != median && i > (n/2) ) am++;}
        cout << max(am,bm) << nl;
    }
}