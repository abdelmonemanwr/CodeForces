#include <bits/stdc++.h>

#define f first
#define s second

//#define e end()
//#define b begin()
#define re rend()
#define rb rbegin()

#define all(a) a.b, a.e
#define rall(a) a.rb, a.re

#define pb(val) push_back(val)
#define pf(val) push_front(val)

#define max(a, b) (a>b?a:b)
#define min(a, b) (a<b?a:b)
#define max3(i, j, k) max(i, max(j, k))
#define min3(i, j, k) min(i, min(j, k))

#define rz return 0;
#define ins(val) insert(val)
#define sz(xx) xx.size()

#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))

#define mem(a, v) memset(a,v, sizeof(a))
#define forn(i, a, n, k) for(int i=a; i<n; i+=k)

using namespace std;

typedef long long int ll;
typedef long double ld;

const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 8;
const ll LLINF = LLONG_MAX;
const ld PI = 3.142857142857142857;

void MEN3M(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    MEN3M();
    int n;
    cin >> n;
    string s[n];
    // string       int          bool             int
    // s[i]     freq of s[i]   firstTime    number i -> s[i](x)
    map<string, pair<int, pair<bool, int>>>mp;
    for(int i=0; i<n; i++){
        cin >> s[i];
        mp[s[i]].first++;
        mp[s[i]].second.first=false;
        mp[s[i]].second.second=0;
    }

    for(int i=0; i<n; i++){
        if(!mp[s[i]].second.first){
            cout<<s[i]<<"\n";
            mp[s[i]].first--;
            mp[s[i]].second.first=true;
            mp[s[i]].second.second = 1;
        } else {
            cout<<s[i]<<"("<<mp[s[i]].second.second++<<")\n";
        }
    }

    rz
}