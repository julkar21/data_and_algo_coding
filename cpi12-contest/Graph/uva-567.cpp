#include <bits/stdc++.h>
using namespace std;
vector<int> g[21];

void bfs(int s, int d){
    queue<int> q;
    int vis[50]={0}, lev[50];
    q.push(s);
    vis[s]=1;
    lev[s]=0;
    while(!q.empty()){
        int parent = q.front();

        for(int l=0; l<g[parent].size();l++){

            int child = g[parent][l];
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                lev[child] = lev[parent] + 1;
            }
        }
        q.pop();
    }
    printf("%2d to %2d: %d\n", s , d, lev[d]);
}

int main(){
    int x,y,caseno=0;
    while(scanf("%d",&x)==1)
    {   for(int j=0; j<x; j++)
        {
            scanf("%d",&y);
            g[1].push_back(y);
            g[y].push_back(1);
        }
        for(int i=2;i<=19;i++){
            scanf("%d",&x);
            for(int j=0;j<x;j++){
                scanf("%d",&y);
                g[i].push_back(y);
                g[y].push_back(i);
            }
        }
        int src,des,n;
        scanf("%d",&n);
        printf("Test Set #%d\n",++caseno);
        for(int i=0;i<n;i++){
            scanf("%d %d",&src, &des);
            bfs(src,des);
        }
        cout<<endl;
        for(int i=0;i<21;i++){
            g[i].clear();
        }
        /* print the graph
        for(int i=0;i<=20;i++){
            int z = i;
            printf("%d :",z);

            for(int j=0;j<g[i].size();j++){
                cout<<g[i][j]<<" ";
            }
            cout<<endl;
        }*/
    }
    return 0;
}
