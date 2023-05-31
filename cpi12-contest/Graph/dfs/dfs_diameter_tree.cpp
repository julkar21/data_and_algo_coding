#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> graph[N];
int depth[N];
void dfs(int vertex, int par=0){
    for(int child:graph[vertex]){
        if(child==par)continue;
        depth[child]=depth[vertex]+1;
        dfs(child, vertex);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    int mx_depth=-1;
    int mx_node;
    for(int i=1;i<=n;i++){
        if(mx_depth<depth[i]){
            mx_depth=depth[i];
            mx_node=i;
        }
        depth[i]=0;
    }
    dfs(mx_node);
    mx_depth=-1;
    for(int i=1;i<=n;i++){
        if(mx_depth< depth[i]){
            mx_depth=depth[i];
        }
    }
    cout<<mx_depth<<endl;
}
