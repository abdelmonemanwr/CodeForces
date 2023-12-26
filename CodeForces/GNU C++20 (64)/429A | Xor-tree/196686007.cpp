#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 2e5 + 5, MOD = 1e9 + 7, INF = 1e9 + 8;
 
vector<int> ans;
int init[N], goal[N];
vector<int> adjList[N];
 
void dfs(int node, int parent, int level, int countEven, int countOdd) {
    if (level & 1) {
        if (countOdd & 1) {
            init[node] = !init[node];
        }
    } else {
        if (countEven & 1) {
            init[node] = !init[node];
        }
    }
 
    if (init[node] != goal[node]) {
        ans.push_back(node);
        if (level & 1) {
            countOdd++;
        } else {
            countEven++;
        }
    }
 
    for (int child: adjList[node]) {
        if (child != parent) {
            dfs(child, node, level + 1, countEven, countOdd);
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    for (int i = 2; i <= n; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
 
    for (int i = 1; i <= n; i++)
        cin >> init[i];
    for (int i = 1; i <= n; i++)
        cin >> goal[i];
 
    dfs(1, 0, 0, 0, 0);
 
    cout << ans.size() << '\n';
    for (int val: ans)
        cout << val << '\n';
}