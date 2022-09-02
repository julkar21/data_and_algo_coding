#include <bits/stdc++.h>
using namespace std;

void matrix(int n,int x,int y){

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==x-1)swap(arr[x-1][j],arr[y-1][j]);

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==x-1)swap(arr[i][x-1],arr[i][y-1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-1)cout<<arr[i][j];
            else cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}

int main(){

    int n,x,y;
    cin>>n>>x>>y;
    matrix(n,x,y);

    return 0;
}

