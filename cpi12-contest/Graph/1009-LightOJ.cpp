#include <bits/stdc++.h>
using namespace std;
#define LIM 20010
vector<int> adj[LIM];
int vis[LIM],type[LIM];

void clearArr(){
    for(int i=0;i<LIM;i++){
        vis[i]=0;
        type[i]=0;
        adj[i].clear();
    }
}

int bfs(int s){
    //vamp=1,lykn=0
    int vamp=0,lykn=0;
    vis[s]=1;
    type[s]=1;
    vamp=1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(int i=0;i<adj[parent].size();i++){
            int child = adj[parent][i];
            if(!vis[child]){
                if(type[parent]==1){
                    type[child]=0;
                    lykn+=1;
                }else{
                    type[child]=1;
                    vamp+=1;
                }
                q.push(child);
                vis[child]=1;
            }

        }
    }
    return max(vamp,lykn);
}

int main(){
    int T,t;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){
        int n;
        scanf("%d",&n);
        int u,v;
        for(int i=0;i<n;i++){
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=0;
        for(int i=0;i<20000;i++){
            if(!vis[i] && !adj[i].empty()){
                ans+=bfs(i);
            }
        }

        printf("Case %d: %d\n",t,ans);
        clearArr();
    }
    return 0;
}
