#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
const int N = 1e6+5;
 
void easy(){
 string s;
 cin >> s;
 if(s[0]=='a' or s[1]=='b' || s[2]=='c')
  cout << "YES\n";
 else cout << "NO\n";
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