#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */
    int get_bucket(int x){
        while (x % 2 == 0) x /= 2;
        return x;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> a(n+1); for(int i = 1; i <= n; i++) cin >> a[i];
        bool flag = true;
        for(int i = 1; i <= n;i++){
            if(get_bucket(a[i]) != get_bucket(i)){
                flag = false;break;
            }
        }
        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}