#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
using namespace std;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acose(-1)
#define pb push_back
#define em emplace_back
#define MOD 1000000007
#define OO 0x3f3f3f3f
#define LOO 0x3f3f3f3f3f3f3f3f
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))
#define mem(x, y) memset(x,y,sizeof x)
#define cin_vector(a) for(auto& i : a) cin >> i;
#define forn(i, a, n, k) for(int i=a; i<n; i+=k)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ForEachTestCase int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
 
void TRY_SOLVE_IT() {
    int n;
    cin >> n;
    string s;
    unordered_map<string, int>mp;
    while(n--){
        cin >> s;
        if(mp.find(s)==mp.end()){
            cout<<"OK\n";
        } else {
            cout<<s<<mp[s]<<nl;
        }
        mp[s]++;
    }
}
 
signed main() {
    EasyPeasyLemonSqueezy
    TRY_SOLVE_IT();
    return 0;
}
                            