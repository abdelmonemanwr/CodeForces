#include <bits/stdc++.h>
// #include <mpi.h>
using namespace std;
using ll = long long int;
#define FAST ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define allrev(a) (a).rbegin(), (a).end()
#define all(a) (a).begin(), (a).end()
#define sortvec(vi) sort(all(vi))
#define pb push_back
#define S second
#define F first
 
typedef vector<int> vi;
typedef long long int ll;
typedef pair<ll , ll> pii;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 8;
const double PI = acos(-1);
 
int main(int argc, char* argv[]){
    FAST
//    MPI_Init(&argc, &argv);
//    int size, rank;
//    MPI_Comm_size(MPI_COMM_WORLD, &size);
//    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
//    cout<<"Thread Number "<<rank<<"\t"<<"Thread size "<<size<<"\n";
// MPI_Finalize();
 
    ll n, m;
    cin >> n >> m;
    vector<pii> vp(n);
    ll mn = 0, mx = 0;
    for(int i=0; i<n; i++)
        cin >> vp[i].F >> vp[i].S, mn+=vp[i].S, mx+=vp[i].F;
    if(mn > m) return cout << "-1\n", 0;
    priority_queue<ll>pq;
    for(int i=0; i<n; i++){
        pq.push(vp[i].F - vp[i].S);
    }
    ll ans = 0;
    while(mx > m){
        mx -= pq.top();
        pq.pop();
        ans++;
    }
    cout << ans << endl;
    return 0;
}