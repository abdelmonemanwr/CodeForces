#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
void solve() {
 int n;
 cin >> n;
 int vertical[n];
 for (int i = 0; i < n; i++){
  cin >> vertical[i];
 }
 if(vertical[0]!=n){
  cout << "NO\n";
 } else {
  int sz = 0;
  vector<int> horizontal;
  for (int i = n - 1; i >= 0; i--){
   while(sz < vertical[i]){
    horizontal.push_back(i+1);
    sz++;
   }
  }
  for (int i = 0; i < n; i++){
   if(vertical[i] != horizontal[i]){
    cout << "NO\n";
    return;
   }
  }
  cout << "YES\n";
 }
}
 
int main() {
 ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
 int t = 1;
 cin >> t;
 while (t--)
  solve();
 return 0;
}