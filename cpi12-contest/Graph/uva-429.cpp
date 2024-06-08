#include <bits/stdc++.h>
using namespace std;

#define LIM 1003
#define ll long long

map<string,vector<string>>g;
map<string, ll > vis,dis;
vector<string>v;

void bfs(string s, string s2){
    dis.clear();
    vis.clear();

    queue<string> q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;

    while(!q.empty()){
        string par = q.front();
        q.pop();
        for(int i=0;i<g[par].size();i++){
            string child = g[par][i];
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[par]+1;
            }
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,s1;
        while(1){
            getline(cin,s);
            if(s!="*"){
                v.push_back(s);
            }
            else break;
        }
        for(int i=0;i<v.size();i++){
            string s1 = v[i];
            for(int j=0;j<v.size();j++){
                string s2 = v[j];
                if(s1.size()==s2.size()){
                    ll c=0;
                    for(ll k=0;k<s1.size();k++){
                        if(s1[k]!=s2[k])c++;
                    }
                    if(c==1){
                        g[s1].push_back(s2);
                    }
                }
            }
        }
        while(getline(cin,s)){
            if(s.empty())break;
            stringstream ss(s);
            string s1,s2;
            ss>>s1>>s2;
            bfs(s1,s2);
            cout<<s1<< " "<< s2<< " "<<dis[s2]<<endl;
        }
        g.clear();
        if(t)cout<<endl;
    }
    return 0;
}
