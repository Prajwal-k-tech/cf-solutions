#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long a, b, x;
        scanf("%lld %lld %lld", &a, &b, &x);
        long long ans = LLONG_MAX;
        
        for(long long aa = a, i = 0; i <= 32; i++){
            for(long long bb = b, j = 0; j <= 32; j++){
                ans = min(ans, i + j + abs(aa - bb));
                if(bb == 0) break;
                bb /= x;
            }
            if(aa == 0) break;
            aa /= x;
        }
        
        printf("%lld\n", ans);
    }
    return 0;
}
