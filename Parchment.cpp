#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
// Author oGhostyyy
/* Thinking: n integers 1 to A, delete every number to delete evil parchment, device charges upto k , x to k deleted, use device f times what is k
do we want to sort and create an array of differences?*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; //integers on parchment
    cin >> n;
    int a; //max possible integer 
    cin >> a;
    vector<int> p(n); for(auto& it : p) cin >> it; //parchment integers
    int q; //number of values to find f for
    cin >> q;
    set<int> parchment(p.begin(), p.end());
    int ss = parchment.size(); //size of set 
    vector<int> unique_vals(parchment.begin(), parchment.end()); //apparently vector cuz fast access
    //an upper bound array makes sure, if there is a super high value we dont needless go through all ks
    vector<int> up_bnd(a + 1, a + 1);
    int j = 0;
    for(int i = 1; i <= a; i++){
        while(j < ss && unique_vals[j] < i) j++;
        if(j < ss) up_bnd[i] = unique_vals[j];
    }
    //compute upto the range we need 
    int max_val = unique_vals.back();
    vector<int> fuc(max_val + 2); //f uses 
    //precomput min uses like the previous solutions
    for(int k = 0; k <= max_val + 1; k++){
        int uses = 0;
        int current = unique_vals[0]; 
        while(current <= max_val){
            uses++;
            current += k; 
            if(current >= max_val) break;
            current = up_bnd[current + 1]; //jump according to the upper bounds saving so much time 
        }
        fuc[k] = uses;
    }
    for(int i = 0; i < q; i++){
        int f;
        cin >> f;
        // If f >= unique count, 0 
        if(f >= ss){
            cout << 0 << nl;
            continue;
        }
        //bs for k 
        int left = 0, right = max_val + 1;
        int ans = max_val + 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(fuc[mid] <= f){
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << ans << nl;
    }
}
