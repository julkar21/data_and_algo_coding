#include <bits/stdc++.h>

using namespace std;
#define LIM 30030

vector<int> g[LIM],w[LIM];
int vis[LIM],dis[LIM];
int cs = 1;

void bfs(int src){
    memset(vis, 0, sizeof vis);
    memset(dis, 0, sizeof dis);

    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(int i=0;i<g[parent].size();i++){
            int child = g[parent][i];
            if(!vis[child]){
                vis[child] = 1;
                dis[child] = dis[parent]+w[parent][i];
                q.push(child);
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        for(int i=0;i<num;i++){
            g[i].clear();
            w[i].clear();
        }
        for(int i=0;i<num-1;i++){
            int v1,v2,wt;
            cin>>v1>>v2>>wt;

            g[v1].push_back(v2);
            w[v1].push_back(wt);
            g[v2].push_back(v1);
            w[v2].push_back(wt);
        }
        bfs(0);
        int node,mx=-1;
        for(int i=0;i<num;i++){
            if(dis[i]>mx){
                mx=dis[i];
                node = i;
            }
        }
        bfs(node);
        mx=-1;
        for(int i=0;i<num;i++){
            if(dis[i]>mx){
                mx=dis[i];
            }
        }
        cout<<"Case "<<cs++<<": "<<mx<<endl;
    }

    return 0;
}
