#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
//Author : oGhostyyy
/*Thinking: So, maybe variable sliding window? obviously you need to sub from medium so find 
median somehow?, ok ok idea is slide the windows find median in each window calculate cost submit cost simple*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k; //size of array, window size 
    vector<int> arr(n); for(auto &it : arr) cin >> it; //input taken 
    //so apparently diff from the median from each element in the window is too slow 
    //so we maintain 2 multisets, the largest value in left half will contain the median
    //this allows us to keep track of median at near constant time
    //maintain the sum of the sets, no.(leftset) * median - sum + sum - no(right)* median = cost 
    //this crazy formula comes cuz  just write it down ull see it lol 
    //ok now gotta code this
    set<pair<int,int>> ls; //left set
    set<pair<int,int>> rs; //right set 
    //for k = 1, cost always 0, for k = 2 cost is abs of their difference
    if(k == 1){
        for(int i = 0; i < n; i++){
            cout << 0 << " " ;
        }
    return 0;}
        if(k == 2){
            for(int i = 1; i < n; i++){
                cout << abs(arr[i-1] - arr[i]) << " ";
            }
            return 0;
        }
        vector<pair<int,int>> st; //starting one for the first windows 
        for(int i = 0; i < k; i++){
            st.push_back({arr[i],i});}
            sort(st.begin(),st.end()); //sort and get median 
            ll lS = 0;
            ll rS = 0; //initliazing left sum and right sum
            for(int i = 0; i < k/2 + (k%2); i++){
                ls.insert(st[i]);
                lS += st[i].first;
            }
            for(int i = k/2 + (k%2); i < k; i++){
                rs.insert(st[i]);
                rS += st[i].first;
            }
            ll median = (*ls.rbegin()).first;
            cout << (median * ls.size() - lS) + (rS - median*rs.size()) << " ";
            // Helper functions to rebalance the sets and maintain median 
            auto rebalance = [&]() {
                //left always 1 more than right since left has the median 
                while (ls.size() > (k + 1) / 2) {
                    auto it = ls.end(); --it;
                    rS += it->first;
                    rs.insert(*it);
                    lS -= it->first;
                    ls.erase(it);
                }
                while (ls.size() < (k + 1) / 2 && !rs.empty()) {
                    auto it = rs.begin();
                    lS += it->first;
                    ls.insert(*it);
                    rS -= it->first;
                    rs.erase(it);
                } //the moving around 
            };
            //Slide da window 
            for(int i = k; i < n; i++){
                int out = arr[i - k];
                pair<int,int> outPair = {out, i - k};
                if(ls.count(outPair)){
                    ls.erase(outPair);
                    lS -= out;
                } else {
                    rs.erase(outPair);
                    rS -= out;
                }
                int in = arr[i];
                pair<int,int> inPair = {in, i};
                if(ls.empty() || in <= (*ls.rbegin()).first){
                    ls.insert(inPair);
                    lS += in;
                } else {
                    rs.insert(inPair);
                    rS += in;
                }
                rebalance();
                ll median = (*ls.rbegin()).first;
                cout << (median * ls.size() - lS) + (rS - median * rs.size()) << " ";
            }
    return 0; //wow, that was long 
}