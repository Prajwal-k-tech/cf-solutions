#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
// Author oGhostyyy
/* Thinking: two arrays, guaranteed that from 1 to 2n appears in exactly one of the arrays, operations that can be performed are:
make sure both are sorted, also make sure every ai less than bi 
Operations possible : can basically swap adjacent or between a and b 
Make sure u dont exceed 1709 operation s */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; 
        vector<int> a(n); for(auto &it : a) cin >> it;
        vector<int> b(n); for(auto &it : b) cin >> it;
        
    }
vector<tuple<int,int,int>> edges; // (from, to, weight)
int n; // number of nodes
int x = 0; // source vertex
vector<int> distance(n+1);
const int INF = 1e9;

for (int i = 1; i <= n; i++) distance[i] = INF;
distance[x] = 0;
for (int i = 1; i <= n-1; i++) {
    for (auto e : edges) {
        int a, b, w;
        tie(a, b, w) = e;
        distance[b] = min(distance[b], distance[a]+w);
    }
}
vector<vector<pair<int,int>>> adj; // adj[u] = {(v, weight)}
int n; // number of nodes
int x = 0; // source vertex
vector<int> distance(n+1, 1e9);
vector<bool> processed(n+1);
priority_queue<pair<int,int>> q;

distance[x] = 0;
q.push({0, x});

while (!q.empty()) {
    int a = q.top().second; q.pop();
    if (processed[a]) continue;
    processed[a] = true;
    for (auto u : adj[a]) {
        int b = u.first, w = u.second;
        if (distance[a] + w < distance[b]) {
            distance[b] = distance[a] + w;
            q.push({-distance[b], b});
        }
    }
}
vector<vector<pair<int,int>>> adj; // adjacency list
int n; // number of nodes
vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));

// Initialize distances
for (int i = 1; i <= n; i++) {
    dist[i][i] = 0;
}

// Convert adjacency list to matrix
for (int u = 1; u <= n; u++) {
    for (auto edge : adj[u]) {
        int v = edge.first;
        int w = edge.second;
        dist[u][v] = min(dist[u][v], w); // handle multiple edges
    }
}

// Floyd-Warshall algorithm
for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dist[i][k] != 1e9 && dist[k][j] != 1e9) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}
