#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
const int N = 1e6+5;
 
void easy(){
 int n;
 cin >> n;
 int a[n];
 for (int &aa : a)
  cin >> aa;
 sort(a, a+n);
 a[0]++;
 ll ans = 1;
 for (int &aa : a)
  ans *= aa;
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