#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
const int N = 1e6+5;
 
void easy(){
 char a[10][10];
 
 for (int i = 0; i < 10; i++)
  for(int j = 0; j < 10; j++)
   cin >> a[i][j];
 
 int standard[10][10]={{0}};
 for (int i = 0; i < 10; i++){
  for(int j = 0; j < 10; j++){
   if(i==0 || i==9 || j==0 || j==9){
    standard[i][j] = 1;
   } else if((i==1 || i==8 || j==1||j==8) && j>0 && j<9 && i>0 && i<9){
    standard[i][j] = 2;
   } else if((i==2 || i==7 || j==2||j==7) && j>1 && j<8 && i>1 && i<8){
    standard[i][j] = 3;
   } else if((i==3 || i==6 || j==3||j==6) && j>2 && j<7 && i>2 && i<7){
    standard[i][j] = 4;
   } else if((i==4 || i==5 || j==4||j==5) && j>3 && j<6 && i>3 && i<6){
    standard[i][j] = 5;
   }
  }
 }
 
 int ans = 0;
 for (int i = 0; i < 10; i++)
  for(int j = 0; j < 10; j++)
   if(a[i][j]=='X')
    ans += standard[i][j];
 
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