#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
void solve() {
 int n, x;
 cin >> n;
 int a[n];
 for(int &aa:a)cin >> aa;
 vector<int> ans;
 ans.emplace_back(a[0]);
 for(int i=1; i<n; i++){
  if(a[i]<a[i-1]){
   ans.emplace_back(a[i]);
  }
  ans.emplace_back(a[i]);
 }
 cout << ans.size() << '\n';
 for(int aa:ans)cout << aa << ' ';
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