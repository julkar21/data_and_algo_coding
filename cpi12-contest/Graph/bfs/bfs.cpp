#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;

vector<int> graph[N];
int vis[N];
int lvl[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout<< par << " ";
        for(int child : graph[par]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                lvl[child]=lvl[par]+1;
            }
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bfs(1);
    for(int i=1;i<=n;i++){
        cout<< i << lvl[i] << endl;
    }
}
/**
13
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11
9 11
**/
