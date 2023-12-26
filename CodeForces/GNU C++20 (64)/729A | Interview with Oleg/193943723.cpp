#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <ext/rope>
#include <regex>
#include <string>
 
using namespace std;
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define OO 0x3f3f3f3f
#define sz(s) (int)size(s)
#define LOO 0x3f3f3f3f3f3f3f3f
#define all(v) v.begin(), v.end()
#define Tests int t = 1; cin >> t; while(t--)
using ll = long long int;
const ll N = 105, mod = 1e9 + 7;
 
void File() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", " r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void Code() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n;) {
        if (i + 2 < n and s[i] == 'o' and s[i + 1] == 'g' and s[i + 2] == 'o') {
            cout << "***";
            i += 3;
            while (i + 1 < n and s[i] == 'g' and s[i + 1] == 'o')i += 2;
        } else cout << s[i++];
    }
}
 
int main() {
    File();
    Code();
}