#include <bits/stdc++.h>
using namespace std;
int main(){

    int step,mod,index=0;
    while(cin>>step>>mod){
        bool bad = false;
        bool vis[mod]={0};
        for(int i=0;i<mod;i++){
            int generated=(index+step)%mod;
            if(vis[generated]==1){
                bad = true;
                break;
            }
            vis[generated]=1;
            index=generated;
        }
        cout<<setw(10)<<step<<setw(10)<<mod<<"    ";
        bad ? cout<<"Bad Choice\n\n":cout<<"Good Choice\n\n";

    }

    return 0;
}
