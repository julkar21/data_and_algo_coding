#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> graph[N];
int parent[N];
/**
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
**/
void dfs(int vertex, int par=-1){
    parent[vertex]=par;
    for(int child:graph[vertex]){
        if(child==par)continue;
        dfs(child,vertex);
    }
}

vector<int> path(int vertex){
    vector<int> ans;
    while(vertex!=-1){
        ans.push_back(vertex);
        vertex=parent[vertex];
    }
    reverse(ans.begin(),ans.end());
    return ans;
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
    int x,y;
    cin>>x>>y;
    vector<int> x_path = path(x);
    vector<int> y_path = path(y);
    int min_length = min(x_path.size(),y_path.size()) ;
    int lca=-1;
    for(int i=0;i<min_length;i++){
        if(x_path[i]==y_path[i]){
            lca=x_path[i];
        }else break;
    }
    cout<<lca<<endl;
}
