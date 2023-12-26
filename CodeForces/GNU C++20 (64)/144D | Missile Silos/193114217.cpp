#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<int,int>>adj[200005];
int ans,l;
int dis[200005];
void dijkstra(int s) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,s});
    while(!pq.empty()) {
        int par=pq.top().second;
        int length=pq.top().first;
        pq.pop();
        if(dis[par]!=-1)
            continue;
        dis[par]=length;
        if(dis[par]==l)
            ans++;
        for(auto i:adj[par]) {
            if(dis[i.first]==-1)
                pq.push({length+i.second,i.first});
        }
    }
}
int main() {
    std::ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, m, s, to, from;
    int len;
    set<pair<pair<int, int>, int>>st;
    cin>>n>>m>>s;
    for(int i=1; i<=n; i++)
        dis[i]=-1;
    for(int i=1; i<=m; i++) {
        cin>>from>>to>>len;
        if(to<from)
            swap(to,from);
        adj[to].push_back({from,len});
        adj[from].push_back({to,len});
        st.insert({{from,to},len});
    }
    cin>>l;
    dijkstra(s);
    for(auto i:st) {
        from=i.first.first;
        to=i.first.second;
        len=i.second;
        if(dis[from]<l&&dis[to]<l&&dis[from]+dis[to]+len==2*l)
            ans++;
        else if(dis[from]+dis[to]+len>2*l) {
            if(dis[from]<l&&dis[from]+len>l)
                ans++;
            if(dis[to]<l&&dis[to]+len>l)
                ans++;
        }
    }
    cout<<ans;
    return 0;
}