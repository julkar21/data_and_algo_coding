#include <bits/stdc++.h>
using namespace std;

const int N = 10e3+10;

vector<int>graph[N];
bool vis[N];

void dfs(int vertex){

    cout<<vertex<<endl;
    vis[vertex]=true;

    for(int child:graph[vertex]){
    cout<<"par "<<vertex<<", child "<<child<<endl;
        if(vis[child]) continue;
        dfs(child);
    }
}

int main(){

    freopen("input","r",stdin);
    int n,m;
    cin>>n>>m;
    int v1,v2;
    for(int i=0;i<m;i++){
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}
