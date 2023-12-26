#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define OO 0x3f3f3f3f
#define Map map<int , int>
#define pii pair<int , int>
#define sz(s) (int)(s).size()
 
const int N = 2e5 + 5;
 
struct FenwickTree {
    int sz;
    vector<int> Bit;
 
    FenwickTree(int n) {
        sz = n;
        Bit = vector<int>(sz + 2);
    }
 
    void update(int idx, int val) {
        while (idx <= sz) {
            Bit[idx] += val;
            int post = idx;
            post &= -idx;
            idx += post;
        }
    }
 
    ll query(int idx) {
        ll ret = 0;
        while (idx > 0) {
            ret += Bit[idx];
            int get = idx;
            get &= -idx;
            idx -= get;
        }
        return ret;
    }
 
    void clear() {
        for (int i = 0; i <= sz; i++) {
            Bit[i] = 0;
        }
    }
};
 
void Solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    FenwickTree FTree(n + 2);
    vector<int> save(n + 2);
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            FTree.update(l, 1);
            FTree.update(r + 1, -1);
        } else {
            int idx;
            cin >> idx;
            int ans = FTree.query(idx);
            ans -= save[idx];
            for (int i = 1; i <= ans && a[idx] > 9; i++) {
                int tp = a[idx];
                int sum = 0;
                while (tp) {
                    sum += tp % 10;
                    tp /= 10;
                }
                a[idx] = sum;
                save[idx]++;
            }
            cout << a[idx] << nl;
        }
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        Solve();
    }
    return 0;
}