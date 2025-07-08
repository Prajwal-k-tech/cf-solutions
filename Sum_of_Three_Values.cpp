#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int x; cin >> x; //size and target 
    vector<pair<int, int>> a(n); // {value, original index}
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; //1 indexed
    }
    sort(a.begin(), a.end());
    // Now, keep 1 fixed and do 2sum
    for(int i = 0; i < n - 2; i++) {
        int target = x - a[i].first;
        int left = i + 1, right = n - 1;
        while(left < right) {
            int sum = a[left].first + a[right].first;
            if(sum == target) {
                // Output original indices
                cout << a[i].second << " " << a[left].second << " " << a[right].second << nl;
                return 0;
            } else if(sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    cout << "IMPOSSIBLE" << nl;
    return 0;
}