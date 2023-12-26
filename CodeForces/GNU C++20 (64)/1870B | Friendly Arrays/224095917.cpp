#include <bits/stdc++.h>
 
using namespace std;
using int64 = long long;
 
void solve() {
 int n, m, mx;
 cin >> n >> m;
 int a[n], b[m], c[32]={};
 for(int i=0; i<n; i++){
  cin >> a[i];
  mx^=a[i];
  for(int j=0; j<31; j++){
   if(a[i]&(1ll<<j))
    c[j]++;
  }
 }
 for(int i=0; i<m; i++)
  cin >> b[i];
 
 if(n&1){
  for(int i=0; i<31; i++){
   if(c[i]&1^1){
    for(int j=0; j<m; j++){
     if((1ll<<i)&b[j]){
      for (int &aa:a){
       aa |= b[j];
      }
      break;
     }
    }
   }
  }
  cout << mx << ' ';
  int new_mx = 0;
  for(int aa:a)
   new_mx ^= aa;
  cout << new_mx << '\n';
  return;
 }
    
    for(int i=0; i<31; i++){
  if(c[i]&1){
   for(int j=0; j<m; j++){
    if((1ll<<i)&b[j]){
     for (int &aa:a){
      aa |= b[j];
     }
     break;
    }
   }
  }
 }
 int mn = 0;
 for(int aa:a) mn ^= aa;
 cout << mn << ' ' << mx << '\n';
}
 
int main() {
 ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
 int t = 1; cin >> t;
 while (t--) solve();
}