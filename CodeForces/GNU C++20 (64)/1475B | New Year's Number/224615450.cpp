#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
const int N = 1e6+5;
 
void easy(){
 int n;
 cin >> n;
 int c = n / 2020;
 n %= 2020;
 cout << (n > c ? "NO\n" : "YES\n");
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