#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex){
    //if(vis[vertex])return; // or that
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child : graph[vertex]){
        cout<<"par "<<vertex<<", child "<< child<<endl;
        if(vis[child])continue; // either this
        dfs(child);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
}
