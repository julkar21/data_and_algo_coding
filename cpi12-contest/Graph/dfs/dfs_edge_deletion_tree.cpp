#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> graph[N];
int subtree_sum[N];
const int M = 1e7+10;
void dfs(int vertex, int par=0){
    subtree_sum[vertex]+=vertex;
    for(int child:graph[vertex]){
        if(child==par)continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
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
    long long ans = 0;
    for(int i=2;i<=n;i++){
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - subtree_sum[i];
        ans = max(ans, (part1*1LL*part2)%M);
    }
    cout<<ans<<endl;
}
