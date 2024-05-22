#include <bits/stdc++.h>
using namespace std;

map<int,int> visited;


void bfs(int source,map< int,vector< int > >G){

    queue<int>q;
    q.push(source);
    visited[source] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int i=0;i<G[par].size();i++){
            int child = G[par][i];
            if(!visited.count(child)){
                visited[child]=visited[par]+1;
                q.push(child);
            }
        }
    }
}

int main(){
    int edges, cases=0;
    while(scanf("%d",&edges)==1 & edges!=0){
        map< int,vector< int > >G;
        for(int i=0; i<edges; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            G[x].push_back(y);
            G[y].push_back(x);
        }

        /*map< int,vector< int > >::iterator it = G.begin();
        while(it != G.end()){
            cout<<it->first<<" "<<endl;
            for(int i=0; i<G[it->first].size(); i++)
            {
               cout<<G[it->first][i]<< " ";
            }
            cout<<endl;
             ++it;
        }
        */
        int ttl, source;
        while(scanf("%d %d", &source, &ttl)==2)
        {
            if(source==0 && ttl==0) break;
            map< int, int>::iterator it;
            visited.clear();
            bfs(source,G);
            int count=0;
            for(it=visited.begin(); it!=visited.end();++it)
            {
                if((*it).second>ttl){
                    ++count;
                }
            }
            //cout<<G.size()<<' '<<visited.size()<<endl;
            count = count + G.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cases,count, source, ttl);
        }
    }
    return 0;
}












