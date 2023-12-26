#include <bits/stdc++.h>
 
using namespace std;
using int64 = long long;
 
void solve() {
 int n, k, val;
 cin >> n >> k;
 
 vector<int> width(k+1, 0), height(k+1, 0), adj[k+1];
 for (int i = 0; i < n; i++)
  cin >> val, adj[val].emplace_back(i);
 
 set<int> pos;
 for (int i = k; i > 0; i--){
  for(auto u : adj[i]){
   pos.insert(u);
  }
 
  for(auto u: adj[i]){
   int segment_dist = *pos.rbegin() - *pos.begin() + 1;
   if(segment_dist > width[i])
    width[i] = segment_dist;
   if(segment_dist > height[i])
    height[i] = segment_dist;
  }
 }
 
 for (int i = 1; i <= k; i++)
  cout << width[i] + height[i] << ' ';
 cout << '\n';
}
 
int main() {
 ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
 int t = 1;
 cin >> t;
 while (t--)
  solve();
 return 0;
}