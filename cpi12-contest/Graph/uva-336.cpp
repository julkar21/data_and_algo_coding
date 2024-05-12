#include <bits/stdc++.h>
using namespace std;
#define N 310
vector<int>graph[N];
int cs=1,nc,vis[N],lvl[N];
queue<int>q;


void clr (){
    memset(vis,0,sizeof vis);
    memset(lvl,0,sizeof lvl);
}

void bfs(int node,int ttl){
    q.push(node);
    lvl[node]=0;
    vis[node]=1;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int child:graph[par]){
            if(!vis[child]&&lvl[par]+1<=ttl){
                lvl[child]=lvl[par]+1;
                q.push(child);
                vis[child]=1;
            }
        }
    }
//    cout<<"Case "<<cs++<<": "<<(s.size()-cnt)<<" nodes not reachable from node "<<node<<" with TTL = "<<ttl<<"."<<endl;
//    clr();
}

void nodeToFar() {
    clr();
    map<int,int> m;
    int id=1;
    while(nc--){
        int u,v;
        cin>>u>>v;
        if(!m[u]){
            m[u]=id;
            id++;
            cout<<"id : "<<id<<endl;
        }
        if(!m[v]){
            m[v]=id;
            id++;
            cout<<"id : "<<id<<endl;
        }
        cout<<"m[u] : "<<m[u]<<endl;
        cout<<"m[v] : "<<m[v]<<endl;
    }
}

int main(){
    cin>>nc;
    nodeToFar();
//    while(cin>>n && n!=0){
//        clr();
//        for(int i=0;i<N;i++) graph[i].resize(0);
//        s.clear();
//        for(int i=0;i<n;i++){
//            int v1,v2;
//            cin>>v1>>v2;
//            s.insert(v1);
//            s.insert(v2);
//            graph[v1].push_back(v2);
//            graph[v2].push_back(v1);
//        }
//        int node,ttl;
//        while(cin>>node>>ttl){
//            if(node==0&&ttl==0)break;
//            bfs(node,ttl);
//        }
//    }
    return 0;
}
