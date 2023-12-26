#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
void peasy(){
 int r, c, n, k, u, v, ans = 0;
 cin >> r >> c >> n >> k;
 
 vector<vector<int>> arr(10, vector<int>(10, 0));
 for(int i=0;i<n;i++)
  cin >> u >> v, arr[--u][--v] = 1;
 
 for (int i = 0; i < r; i++){
  for (int j = 0; j < c; j++){
   for (int g = i; g < r; g++){
    for (int l = j; l < c; l++){
     int cnt = 0;
     for (int a = i; a <= g; a++){
      for (int b = j; b <= l; b++){
       cnt += arr[a][b];
      }
     }
    if(cnt>=k)
                    ans++;
    }
   }
  }
 }
 cout << ans << endl;
}
 
 
int main() {
 ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
 int t = 1;
 // cin >> t;
 while (t--) {
  peasy();
 }
 return 0;
}