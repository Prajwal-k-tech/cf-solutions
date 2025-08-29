#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking:  */
// precomputing all the powers and the prices

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> pow3{1}; // initialize with only 1 in array
    for (int i = 1; i < 19; i++)
        pow3.push_back(pow3.back() * 3);
    vector<ll> cost(pow3.size());
    for (int i = 0; i < pow3.size(); i++)
    {
        if (i == 0)
            cost[i] = 3;
        else
            cost[i] = pow3[i] * 3 + i * pow3[i - 1];
    }
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n; // bought watermelons
        int k; cin >> k; //how many deals can be made 
        // wait lmao is this dp!?!
        // nvm but largest power of 3 less than n
        ll coins = 0;
        int i = 0;
        while(n > 0){
            int d = n % 3; //these many deals of type i
            k -= d;
            if(k < 0) 
            coins += d * cost[i];
            n /= 3;
            i++;
        }
        cout << coins << nl;
    }
}