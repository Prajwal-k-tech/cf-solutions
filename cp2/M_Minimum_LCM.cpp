#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt; cin >> tt;
    while(tt--){
        ll n; cin >> n; 
        ll a = 1; 
        for(ll i = 2; i * i <= n; i++){
            if(n % i == 0){a = n / i; break;}
        }
        
        cout << a << " " << n - a << '\n';
    }
}