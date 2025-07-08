#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: array with n integers , divide into k subarrays to minimize maximum subarray sum
     */

int canDiv(vector<int>& a, int k , ll max){
    int subarrays = 1; //smallest u can have duh
    ll currentSum = 0; //start off from 0
    for(int num : a){
        // If any single element exceeds the limit, impossible
        if(num > max) return 0;
        ll total = currentSum + num;
        if(total > max){
            subarrays++; //start new subarray update cursum
            currentSum = num;
            if(subarrays > k) return 0; // if it took more than k not possible
        }
        else currentSum += num; //or just add and make bigger 
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n; //size of array
    int k; cin >> k; //numbeer of subas 
    vector<int> a(n); for(auto &it : a) cin >> it;
    //the smallest maximum sum in a subarray will be only max element 
    //the largest will be sum of everything 
    ll left = *max_element(a.begin(),a.end()); //returns value at that iterator
    ll right = accumulate(a.begin(), a.end(), 0LL); //all elements at once ,now binary search
    ll answer = right; //initalize with the maximum answer 
    while(left <= right){
        ll mid = left + (right - left) / 2; 
        
        if(canDiv(a, k, mid)){
            answer = mid;
            right = mid - 1; // Try to find smaller maximum sum
        }
        else{
            left = mid + 1; // Need larger maximum sum
        }
    }
    
    cout << answer << nl;
    return 0;}