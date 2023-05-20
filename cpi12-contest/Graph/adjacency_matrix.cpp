#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph[N][N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    //cout<<graph[1][3];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
