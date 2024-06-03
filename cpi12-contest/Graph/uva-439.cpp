#include <bits/stdc++.h>
#define pii pair<int,int>
#define clear(a) memset(a, 0, sizeof(a))

using namespace std;

int ur[] = {-2,-2,2, 2,-1,1,-1, 1};
int uc[] = {-1, 1,-1,1,2, 2,-2,-2};

int visited[10][10];
int cost[10][10]; //consider as level
string str1, str2;

void bfs(int a,int b,int c,int d){
    queue<pii> q;
    clear(visited);
    q.push(pii(a,b));
    visited[a][b]=true;
    cost[a][b]=0;
    while(!q.empty()){
        pii parent = q.front();
        q.pop();

        if(parent.first == c && parent.second == d){
            cout<<"To get from "<<str1<<" to "<<str2<<" takes "<<
            cost[parent.first][parent.second]<<" knight moves.\n";
            return;
        }
        for(int i=0;i<8;i++){
            int f = parent.first + ur[i];
            int s = parent.second + uc[i];
            if((f>0 && f<=8) && (s>0 && s<=8) && !visited[f][s]){
                visited[f][s] = true;
                cost[f][s] = cost[parent.first][parent.second]+1;
                q.push(pii(f,s));
            }
        }
    }
}

int main(){
    while(cin>>str1>>str2){
        int sx = str1[0] - 96;
        int sy = str1[1] - 48;
        int ex = str2[0] - 96;
        int ey = str2[1] - 48;
        bfs(sx,sy,ex,ey);
    }
    return 0;
}
