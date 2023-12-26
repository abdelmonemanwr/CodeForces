#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
bool isprime(ll x) {
 if (x == 1)
  return 0;
 
 for (ll i = 2; i * i <= x; i++) {
  if (x % i == 0)
   return 0;
 }
 
 return 1;
}
 
const int N = 1e3;
int a[N], dp[N][N], n;
 
void ckmax(int& a, int b) {
 a = max(a, b);
}
 
int rec(int i, int last) {
 if (i >= n)
  return 0;
 
 int &res = dp[i][last];
 if(res != -1) return res;
 res = 0;
 cout << "wwww\n";
 
 if (last == -1) {
  int op1 = rec(i + 1, i);
  int op2 = rec(i + 1, last);
  ckmax(res, op1);
  ckmax(res, op2);
 }
 else {
  cout << "noo\n";
  if (isprime(a[i] + a[last])) {
   cout << "here\n";
   int op1 = rec(i + 1, -1) + 1;
   ckmax(res, op1);
  }
  ckmax(res, rec(i + 1, last));
 }
 return res;
}
 
 
void solve() {
 string s;
 cin >> s;
 if (s == "()") {
  cout << "NO\n";
  return;
 }
 int n = s.length();
 string ans;
 cout << "YES\n";
 
 for (int i = 0; i < n - 1; i++) {
  if (s[i] == s[i + 1]) {
   cout << '\n';
   for (int j = 0; j < n; j++) {
    cout << "()";
   }
   cout << '\n';
   return;
  }
 }
 
 for (int i = 0; i < n; i++)
  cout << "(";
 for (int i = 0; i < n; i++)
  cout << ")";
 
 cout << '\n';
}
 
int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 
 int t = 1;
 cin >> t;
 while (t--)
  solve();
}