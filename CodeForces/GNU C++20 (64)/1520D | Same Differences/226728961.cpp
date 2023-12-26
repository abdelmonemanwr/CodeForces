#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
#define all(x) x.begin(), x.end()
const int N = 1e5 + 5;
 
void easy(){
 
 int n ; cin >> n ;
 vector<int> v(n + 1);
 for(int i = 1 ; i <= n ; i++)
  cin >> v[i];
 map<int, int> diff;
 long long ans = 0;
 for(int i = 1 ; i <= n ; i++) {
  ans += (diff[v[i] - i]++);
 }
 cout << ans << endl ;
}
 
int main(){
 ios_base::sync_with_stdio(false), cin.tie(nullptr);
 int t = 1;
 cin >> t;
 while (t--){
  easy();
 }
}