#include <bits/stdc++.h>
using namespace std;

bool vis[1001];             // used to keep track of which nodes are visited.
int count_visit[1001];      // used to keep track of how many times each node has been visited
vector<int>graph[1001];

void bfs(int start_node);   // Slightly modified BFS.
void clr();                 // utility function for resetting values.

int main()
{
    int t,case_number=0;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        set<int>members; // location of members.

        cin>>n>>k>>m;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            members.insert(x);
        }

        for(int i = 0 ; i < m ; i++)
        {
            int u,v;

            cin>>u>>v;
            graph[u].push_back(v);
        }

        for(set<int>::iterator it=members.begin();it!=members.end();it++)
            {
                bfs(*it);
            }

        int ans = 0;
        int siz = members.size();

        for(int i=1;i<=1000;i++)
            {
                if(count_visit[i]==siz)
                ++ans;
            }

         printf("Case %d: %d\n",++case_number,ans);
        clr();
    }
    return 0;
}


void bfs(int start_node)
{
    for(int i = 0 ; i <= 1000 ; i++)
        vis[i]=0;

    queue<int>q;
    vis[start_node]=1;
    ++count_visit[start_node];

    q.push(start_node);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0 ; i < graph[u].size() ; i++)
        {
            if( vis[graph[u][i]] == 0 )
            {
                int v = graph[u][i];
                vis[v] = 1;
                ++count_visit[v];
                q.push(v);
            }
        }
    }
}

void clr()
{
    for(int i=0;i<1001;i++)
    {
        vis[i]=0;
        count_visit[i]=0;
    }
    for(int i=0;i<1001;i++)
    {
        graph[i].clear();
    }
}
