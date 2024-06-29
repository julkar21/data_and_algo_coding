#include <bits/stdc++.h>

using namespace std;
#define LIM 10000
vector<int> dis_from_s,dis_from_d;
int vis[LIM];
vector<int> g[LIM];

void bfs(int s,vector<int>& dis){
    queue<int>q;
    q.push(s);
    vis[s]=1;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int i=0;i<g[parent].size();i++){
            int child = g[parent][i];
            if(!vis[child]){
                vis[child]=1;
                dis[child] = dis[parent]+1;
                q.push(child);
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        int n,r,v1,v2,ans=0;
        cin>>n>>r;

        memset(vis, 0, sizeof vis);
        dis_from_s.assign(n, 0);
        dis_from_d.assign(n, 0);
        for(int i=0;i<r;i++){
            g[i].clear();
        }

        for(int i=0;i<r;i++){
            cin>>v1>>v2;
            g[v1].push_back(v2);
            g[v2].push_back(v1);
        }

        int s,d;
        cin>>s>>d;
        bfs(s, dis_from_s);
        memset(vis, 0, sizeof vis);
        bfs(d, dis_from_d);

        for(int i=0; i<n; i++)
            ans = max(ans, dis_from_s[i]+dis_from_d[i]);

        cout<<"Case "<<cs<<": "<<ans<<endl;
    }
    return 0;
}
