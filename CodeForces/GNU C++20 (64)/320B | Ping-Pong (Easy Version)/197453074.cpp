#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <string>
// #include <iomanip>
// #include <bitset>
 
using namespace std;
using ll = long long int;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define Map map<int , int>
#define pii pair<ll , ll>
#define sz(x) (int)x.size()
 
const int N = 125, M = 1e3+5;
 
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
 
int a[N], b[N], c[N], z;
 
void dfs(int i){
    c[i] = true;
    for(int k = 1; k <= z;k++)
        if(!c[k] && ((a[i]>a[k] && a[i] < b[k]) || (b[i] > a[k] && b[i] < b[k])))
            dfs(k);
}
 
 
void Solve(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int type, x, y;
        cin >> type;
        if(type == 1){
            z++;
            cin >> a[z] >> b[z];
        } else{
            memset(c, 0, sizeof(c));
            cin >> x >> y;
            dfs(x);
            if(c[y]) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false),
    cin.tie(nullptr), cout.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while(tc--){
        Solve();
    }
    return 0;
}