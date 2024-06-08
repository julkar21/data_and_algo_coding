#include <bits/stdc++.h>
using namespace std;

#define LIM 1003

map<string,vector<string>> g;
map<string,int> vis;
map<string,string> parent;
int n;

void graph_input(){
    for(int i=0;i<n;i++){
        string str1,str2;
        cin>>str1>>str2;
        g[str1].push_back(str2);
        g[str2].push_back(str1);
        vis[str1]=0;
        vis[str2]=0;
    }
}

void print_path(string des, string src){
    //cout<<"des= "<< des << " src= " << src<<" "<<endl;
    if(src==des) return;
    print_path(parent[des],src);
    cout<< parent[des]<< " " << des<<endl;
}

void bfs(string src,string des){
    queue<string>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        string par = q.front();
        q.pop();
        if(par==des){
            print_path(des,src);
            return;
        }

        for(int i=0;i<g[par].size();i++){
            string child = g[par][i];
            if(!vis[child]){
                parent[child] = par;
                q.push(child);
                vis[child]=1;
            }
        }
    }
    cout<<"No route"<<endl;
}

int main(){
    string separete = "";
    while(scanf("%d",&n)!=EOF){
        cout<<separete;
        separete="\n";
        graph_input();

        string src, des;
        cin>>src>>des;
        bfs(src,des);

        g.clear();
        vis.clear();
        parent.clear();
    }
    return 0;
}
