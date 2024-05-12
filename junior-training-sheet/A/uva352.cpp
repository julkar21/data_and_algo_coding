#include <bits/stdc++.h>
using namespace std;
char grid[30][30];
bool seen[30][30];
int n;

bool valid(int i,int j){
    return i>=0 && j>=0 && i<n && j<n;
}
int dx[8] = {0, 0, 1,-1,1,-1, 1,-1};
int dy[8] = {1,-1, 0, 0,1,-1,-1, 1};
void dfs(int i,int j){
    if(seen[i][j])return;
    seen[i][j]=1;

    for(int k=0;k<8;k++){

        int xc=dx[k]+i;
        int yc=dy[k]+j;
        if(valid(xc,yc)&&!seen[xc][yc]&&grid[xc][yc]=='1'){
            dfs(xc,yc);
        }
    }
}

int main(){
    int tc=1;
    while(cin>>n){
        for(int i=0;i<n;i++){
            scanf("%s",grid[i]);
        }
        memset(seen,0,sizeof(seen));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!seen[i][j]&&grid[i][j]=='1'){
                    dfs(i,j);
                    ans++;
                }
            }
        }
        cout<<"Image number "<<tc++<<" contains "<<ans<<" war eagles."<<endl;
    }


    return 0;
}
