#include<bits/stdc++.h>
#define IO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long lol;
int main()
{    
     IO; 
     int t, n;
     cin>>t;
     while(t--){
          cin>>n;
          int a[n], size = n;
          map<int,int>mp;
          priority_queue<int>q;
          for (int i = 0; i < n; i++) 
               cin>>a[i], mp[a[i]]++;
          for (auto it : mp) 
               q.push(it.second);
          while(q.size()>=2){
               int x = q.top(); q.pop();
               int y = q.top(); q.pop();
               x--, y--, size-=2;
               if(x) q.push(x);
               if(y) q.push(y);
          }
          cout << size << endl;
     }
    return 0;
}