#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
#define nl '\n'
#define Map map<int , int>
#define pii pair<int , int>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
 
void Solve() {
    int n;
    cin >> n;
    vector<pair<pii, int>> vp(n);
    for (int i = 0; i < n; ++i) {
        vp[i].second = i;
        cin >> vp[i].first.first;
        cin >> vp[i].first.second;
    }
    sort(vp.begin(), vp.end(), [](pair<pii, int> &a, pair<pii, int> &b) {
        if (a.first.first == b.first.first) {
            if (a.first.second == b.first.second) {
                return a.second > b.second;
            } else {
                return a.first.second > b.first.second;
            }
        } else return a.first.first < b.first.first;
    });
    pair<pii, int> start = vp.at(0);
    bool flag = true;
    for (pair<pii, int> p: vp) {
        if (p == start) continue;
        if (p.first.first < start.first.first || p.first.second > start.first.second) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << start.second + 1 << nl;
    } else {
        cout << -1 << nl;
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    Solve();
    return 0;
}