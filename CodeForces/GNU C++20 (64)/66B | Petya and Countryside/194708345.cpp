#define ll long long int
#define el <<"\n"
#define sp <<" "
#define vint vector<int>
#define vll vector<ll>
#define vp  vector<pair<int,int>>
#define fs(n) fixed<<setprecision(n)
#define TC int t; cin>>t; while (t--)
#include<bits/stdc++.h>
#define SUiiiiiiiiiii ios_base::sync_with_stdio(false), cout.tie(NULL),cin.tie(NULL);
double PI=3.14159265359;
/*_______________*_TOoRkY_*_________________*/
using namespace std;
int main() {
    SUiiiiiiiiiii
    int n;cin>>n;
  if (n==1){cout<<1 el; return 0;}
    vll v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }int mx=-1e8;
    for (int i = 0; i < n; ++i) {
        int c=1;
        for (int j = i+1; j < n; ++j) {
            if (v[j]<=v[j-1])c++;
            else break;
        }
        for (int j = i-1; j >=0 ; --j) {
            if (v[j]<=v[j+1])c++;
            else break;
        }
        mx=max(mx,c);
    }
    cout<<mx el;
}