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
    int n; cin >> n; 
    vector<int> w(n); for(auto& it : w) cin >> it; 
         int no = 0; int nt=0; int nz=0; 
         for(int i = 0; i < n; i++){
            if(w[i] == 1) no++;
            if(w[i] == 2) nt++;
            if(w[i] == 0) nz++;
         }  
         cout << min(no,nt) + nz  + ((nt- min(no,nt))/3)  + ((no- min(no,nt))/3)<< nl;
    }
}