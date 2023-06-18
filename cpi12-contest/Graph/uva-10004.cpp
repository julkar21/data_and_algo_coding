#include <bits/stdc++.h>
using namespace std;

const int N = 300;
vector<int> graph[N];
int col[N];
queue<int> q;
int n,m;

bool bfs(int src){
    q.push(src);
    col[src] = 1;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int child:graph[par]){
            if(col[par]==col[child]) return false;
            if(!col[child]){
                if(col[par]==1) col[child]=2;
                else col[child]=1;
                q.push(child);
            }
        }
    }
    return true;
}

int main(){
    while(cin>>n && n){
        cin>>m;
        memset(col,0,sizeof col);
        for(int i=0;i<m;i++){
            int v1,v2;
            cin>>v1>>v2;
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        bool b = false;
        for(int i=0;i<n;i++){
            if(!col[i]){
                b |= bfs(0);
            }
        }
        if(b)cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
        for(int i=0;i<=n;i++)graph[i].resize(0);
    }
    return 0;
}
