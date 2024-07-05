#include <bits/stdc++.h>
using namespace std;
#define LIM 150
vector<int> G[LIM],W[LIM];
int dis[LIM];
priority_queue<pair<int,int>> q;
int n,m;

int dij(int root){
    dis[root]=0;
    q.push({0,root});

    while(!q.empty()){
        int parent = q.top().second;
        q.pop();
        for(int i=0;i<G[parent].size();i++){
            int child   = G[parent][i];
            int child_w = W[parent][i];
            if(dis[child]>dis[parent]+child_w){
                dis[child] = dis[parent]+child_w;
                q.push({-1*child_w,child});
            }
        }
    }
    return dis[n];
}

int main(){
    int T,c=1;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            G[u].push_back(v);W[u].push_back(w);
            G[v].push_back(u);W[v].push_back(w);
        }
        for(int j=1;j<=n;j++)dis[j]=INT_MAX;
        int ans;
        ans = dij(1);
        cout<<"Case "<<t<<": ";
        if(ans==INT_MAX) cout<<"Impossible"<<endl;
        else cout<<ans<<endl;
        for(int i=1;i<=n;i++){
            G[i].resize(0);
            W[i].resize(0);
        }
    }

    return 0;
}
