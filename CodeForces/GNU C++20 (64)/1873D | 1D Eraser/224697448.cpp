#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
const int N = 1e6+5;
 
void easy(){
 int n, k;
 string s;
 cin >> n >> k >> s;
 int ans = 0;
 for(int i=0; i<n; i++){
  if(s[i]=='B'){
   ans++;
   i += k-1;
  }
 }
 cout << ans << '\n';
}
 
 
int main() {
 ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
 int t = 1;
 cin >> t;
 while (t--) {
  easy();
 }
 return 0;
}