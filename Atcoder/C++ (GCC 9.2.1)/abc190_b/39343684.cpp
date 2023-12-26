#include <bits/stdc++.h>
using namespace std;
signed main() { 
    bool killed = false;
    int n, time, damage;
    cin >> n >> time >> damage;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x < time && y > damage) {
            killed = true;
        }
    }
    if (killed)cout << "Yes";
    else cout << "No";
}