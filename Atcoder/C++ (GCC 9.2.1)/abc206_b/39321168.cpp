#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

#define sp ' '
#define nl '\n'
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

void rec(ll n, ll cur, ll add, ll cnt) {
    if (cur > n) return;
    ll now = cur + add;
    if (now >= n) {
        cout << cnt << nl;
        return;
    }
    rec(n, now, add + 1, cnt + 1);
}

void TRY_SOLVE_IT() {
    ll n;
    cin >> n;
    rec(n, 0, 1, 1);
}

signed main() {
    EasyPeasyLemonSqueezy
    TRY_SOLVE_IT();
    return 0;
}