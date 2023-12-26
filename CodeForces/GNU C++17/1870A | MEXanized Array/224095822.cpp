#include <bits/stdc++.h>
 
using namespace std;
using int64 = long long;
 
void solve() {
 int64 n, mex, mx;
 cin >> n >> mex >> mx;
 if(mex-1 > mx || mex > n)
  return cout << "-1\n", void();
 int64 ans = mex * (mex - 1) / 2;
 if(mx==mex)
  mx--;
 ans += (n - mex) * mx;
 cout << ans << '\n';
}
 
int main() {
 ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
 int t = 1;
 cin >> t;
 while (t--)
  solve();
 return 0;
}