#include <bits/stdc++.h>
using namespace std;

#define LIM 30
char g[LIM][LIM];
int vis[LIM][LIM];
int cnt,row,col;

int dx[] = {-1,+1,+0,-0};
int dy[] = {-0,+0,+1,-1};

bool valid(int i,int j){
    if(i>=0 && i<col && j>=0 && j<row)return true;
    return false;
}

void dfs(int i,int j){
    vis[i][j]=1;
    cnt++;
    for(int k=0;k<4;k++){
        int x= dx[k]+i;
        int y= dy[k]+j;
        if(valid(x,y)&& !vis[x][y] && g[x][y]!='#'){
            dfs(x,y);
        }
    }
}

int main(){

    int t,cs=0;
    cin>>t;
    while(t--){
        cin>>row>>col;
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                cin>>g[i][j];
            }
        }
        memset(vis, 0, sizeof vis);
        cnt=0;
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(g[i][j]=='@'){
                    dfs(i,j);
                    break;
                }
            }
        }
        cout<<"Case "<<++cs<<": "<<cnt<<endl;
    }

    return 0;
}
