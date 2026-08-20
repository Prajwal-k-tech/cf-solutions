#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        int x, y, z;
        cin >> x >> y >> z;
        array<int, 3> sides = {x, y, z};
        sort(sides.begin(), sides.end());

        int answer = max(0, sides[2] - sides[0] - sides[1] + 1);
        cout << answer << nl;
    }
}