#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: array of n integers, count subarrays with sum x  */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //size of array
    int x; cin >> x; //target
    vector<int> a(n); //the vector
    for(auto& it : a) cin >> it;
    int count = 0; //the count 
    int left = 0; int right = 0; int currentSum = 0; 
    while(right < a.size()){
        currentSum += a[right];
        while(currentSum > x && left <= right){
            currentSum -= a[left];
            left++; //increment the left 
        }
        if(currentSum == x) count++;
        right++;
    }
    cout << count << nl;
}
