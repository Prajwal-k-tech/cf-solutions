#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: karens knows n coffee recipes, ith says brew between li and ri inclusive 
if atleast k recipes recommend, its admissable if k recommend it  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //number of coffee recipes 
    int k; cin >> k; //how manh people need to recommend it 
    int q; cin >> q; //number of questions 
    
    const int MAXTEMP = 200001;
    vector<int> c(MAXTEMP, 0); //contains our temps 
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        c[l]++;        
        c[r + 1]--; 
    }//our diff array 
    for(int i = 1; i < MAXTEMP; i++) {
        c[i] += c[i - 1];  // cumulative sum gives recipe count per temperature, counts the amount of times they come now so cool 
    }
    //which all are allowed 
    for(int i = 1; i < MAXTEMP; i++) {
        c[i] = (c[i] >= k) ? 1 : 0; 
    }
    //prefix sum that shit again 
    for(int i = 1; i < MAXTEMP; i++) {
        c[i] += c[i - 1];  // this should build our prefix array 
    }
    // Step 5: Answer queries
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << c[b] - c[a - 1] << nl;  //gets us the sum in that range from to b, standard shit    
        //yo this is cool af 
    }
}