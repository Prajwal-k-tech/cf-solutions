#include <bits/stdc++.h>
using namespace std;
//Auth : oGhostyyy
//Thinking: Prefix sums, mods with equal values when subtracted are divisble 
int main(){
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    //stuff to take input 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of cows 
    vector<int> ids(n);
    vector<int> prefix(n+1, 0); //prefix array initalized with 0s
    for(int i = 0; i < n; i++){
        cin >> ids[i];
        prefix[i+1] = (prefix[i] + ids[i]) % 7;
    }
    vector<int> ff(7, -1); //intialize ff with -1  
    int maxi = 0;
    for(int i = 0; i < n+1; i++){
        if(ff[prefix[i]] == -1) ff[prefix[i]] = i;
        else maxi = max(i - ff[prefix[i]], maxi);
    }
    cout << maxi << endl;
    return 0;
}
    