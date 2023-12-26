#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
#define nl '\n'
#define sp ' '
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
inline ll sum(int n) {
    return 1ll * n * (n - 1) / 2;
}
 
inline ll getMin(int n, int teams) {
    int people = ceil(n * 1.0 / teams);
    int mod = n % teams;
    if (!mod)return teams * 1ll * sum(people);
    ll ret = mod * 1ll * sum(people);
    people += (-1 + (teams == 1));
    ll add = (teams - mod) * 1ll * sum(people);
    ret += add;
    return ret;
}
 
inline ll getMax(int n, int teams) {
    return sum(n - teams + 1);
}
 
inline void y3ni_mht3dee4() {
    int n, teams;
    cin >> n >> teams;
    cout << getMin(n, teams) << sp << getMax(n, teams) << nl;
}
 
signed main() {
    Y3niMht3dee4
    y3ni_mht3dee4();
}