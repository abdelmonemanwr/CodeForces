#include <bits/stdc++.h>
using namespace std;
 
void solve() {
 int n, m, k=0;
 cin >> n >> m;
 
 char s[m][n];
 for(int i=0; i<n; i++)
  for(int j=0; j<m; j++)
   cin >> s[j][i];
 
 string v = "vika";
 for (int i = 0; i < m; i++){
  for (int j = 0; j<n; j++){
   if(v[k] == s[i][j]){
    k++;
    if(k == 4)
     return cout << "YES\n", void();
    break;
   }
  }
 }
 cout << "NO\n";
}
 
int main() {
 ios_base::sync_with_stdio(0), 
 cout.tie(0); 
 cin.tie(0);
 int t = 1;
 cin >> t;
 while (t--)
  solve();
}