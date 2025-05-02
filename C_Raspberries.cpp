#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt;
    cin >> tt;
 
    while (tt--) {
 
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
 
        int ans = INT_MAX;
        int even_count = 0;
 
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0)
                even_count++;
 
            // Directly check if already divisible by k
            if (nums[i] % k == 0)
                ans = 0;
 
            // Update minimum required operations
            ans = min(ans, k - (nums[i] % k));
        }
 
        if (k == 4) {
            if (even_count >= 2)
                ans = min(ans, 0);
            else if (even_count == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }
 
        cout << ans << '\n';
    }
    return 0;
}