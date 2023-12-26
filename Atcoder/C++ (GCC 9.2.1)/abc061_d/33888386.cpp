#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long int
#define pii pair<ll,ll>
#define mp make_pair
#define pb push_back
#define oo 0x3f3f3f3f3f3f3f3f
#define N  1005

ll dist[N], n, m, ans;
bool posCycle = false;
vector<pair<int, pii>>edges;

void Bellman_Ford(int src){
	for(int i = 0; i <= n; i++){
		dist[i] = oo;
	}

	dist[src] = 0;
	posCycle = false;
	for(ll i=1; i<=2*n; i++){
		for(ll j=0; j<edges.size(); j++){
			ll w = edges[j].F;
			ll u = edges[j].S.F;
			ll v = edges[j].S.S;
			if(dist[u] + w < dist[v]){
				dist[v] = dist[u] + w;
				if(v == n && i==2*n)posCycle = true;
			}
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i=1; i<=m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		edges.pb({-c, {a, b}});
	}

	Bellman_Ford(1);
	if(posCycle)cout<<"inf";
	else cout<<-dist[n]<<'\n';
}
