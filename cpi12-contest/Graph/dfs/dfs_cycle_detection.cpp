#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<int> graph[N];
bool vis[N];

bool dfs(int vertex, int par=-1){
    vis[vertex]=true;
    bool isLoopExist = false;
    for(int child : graph[vertex]){
        if(vis[child] && child==par)continue;
        if(vis[child])return true;
        isLoopExist |= dfs(child, vertex);
    }
    return isLoopExist;
}

int main(){
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bool isLoopExist = false;
    for(int i=1;i<=v;i++){
        if(vis[i])continue;
        if(dfs(i)){
            isLoopExist = true;
            break;
        }
    }
    cout<<isLoopExist<<endl;
    return 0;
}
