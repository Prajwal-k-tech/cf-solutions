#include <bits/stdc++.h>
using namespace std; 
const char nl = '\n';

int divsum(int n, int k, vector<int> ar){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((ar[i] + ar[j]) % k == 0) count++;
        }
    } return count;
}

int main(){
    int n;  cin >> n;
    int k; cin >> k; 
    vector<int> a(n); 
    for(int i = 0; i < n; i++){cin >> a[i];}
    cout << divsum(n, k, a) << nl;
}