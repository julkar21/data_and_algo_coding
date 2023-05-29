#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
/**Given Q Queries, Q <= 10^5
* In each query given V,
* Print subtree sum of V & Number of even numbers
* in subtree of V
**/
// if nodes value given in an array the simply add the
// val[vertex] instead only vertex
// int val[N]
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
vector<int> graph[N];
int subtree_sum[N];
int even_cnt[N];
void dfs(int vertex, int par=0){
    if(vertex%2==0){
        even_cnt[vertex]++;
    }
    subtree_sum[vertex]+=vertex; //val[vertex]
    for(int child: graph[vertex]){
        if(child==par)continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
        even_cnt[vertex]+=even_cnt[child];
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
    dfs(1,0);
    for(int i=1;i<=n;i++){
        cout<< subtree_sum[i]<< " " << even_cnt[i]<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int v; //from which node we want to count
        cin>>v;
        cout<< subtree_sum[v]<< " " << even_cnt[v]<<endl;
    }
}
