#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,nteam,gifted,count[4]={0},arr[4][5001];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>gifted;
        count[gifted]++;
        arr[gifted][count[gifted]]=i;
    }
    nteam=min(min(count[1],count[2]),count[3]);
    cout<<nteam<<endl;
    for(int i=1;i<=nteam;i++){
        cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
    }
    return 0;
}
