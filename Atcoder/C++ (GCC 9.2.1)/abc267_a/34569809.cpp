#include <ext/pb_ds/assoc_container.hpp>
#include <bits/stdc++.h>
using namespace std;
#define E end()
#define B begin()
#define F first
#define S second
#define int long long int
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define tests int tc=1;cin>>tc;for(int ii=1; ii<=tc; ii++)
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>  Oset;


void solve(){
    string week[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string day ;
    cin >> day ;
    int ans = 0;
    int i = 0;
    for( ; i<7; i++){
        if(day == week[i]){
            break;
        }
    }

    for( ; ; i++){
        if(week[0] != week[i%7]){
            ans++;
        }
        else break;
    }

    cout<<ans<<'\n';
}

signed main() {
	EasyPeasyLemonSqueezy
    solve();
}