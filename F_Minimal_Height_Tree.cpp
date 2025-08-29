#include <bits/stdc++.h>
using namespace std;
//Author: oGhostyyy
/*Thinking :  */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt; 
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n); for(auto& it : a) cin >> it ;
        int height = 0;
        int cur = 1;//nodes at that layer
        int idx = 1;
        while (idx < n) {
            height++;
            int next= 0; 
            for (int i = 0; i < cur && idx < n; i++) {
                next++;//one child atleast 
                idx++;
                //we're in the same layer while incrasing 
                while (idx < n && a[idx] > a[idx - 1]) {
                    next++; //next layer has more kids
                    idx++;
                }
            }
            cur = next;
        }
        cout << height << '\n';
    }
}
