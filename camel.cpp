#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';

int circularRotationArray(vector<int> a, int n, int k, int i){k %= n; return a[(i - k+ n) % n];}

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){cin >> a[i];}
    while(q--){int i; cin >> i; cout << circularRotationArray(a, n, k, i) << nl;}
}