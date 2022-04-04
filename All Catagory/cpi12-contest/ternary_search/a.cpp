#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll costCalculation(int x,int n,ll height[],ll cost[]){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(x-height[i])*cost[i];
    }
    return sum;
}

int main(){

    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        ll height[n];
        ll cost[n];
        for(int i=0;i<n;i++){
            cin>>height[i];
        }
        for(int i=0;i<n;i++){
            cin>>cost[i];
        }
        ll l=0,r=10000;
        while(l<r){
            ll m1=l+(r-l)/3;
            ll m2=r-(r-l)/3;

            ll cm1 = costCalculation(m1,n,height,cost);
            ll cm2 = costCalculation(m2,n,height,cost);

            if(cm1>cm2){
                l=m1+1;
            }else if(cm1<cm2){
                r=m2-1;
            }else{
                l=m1+1;
                r=m2-1;
            }
        }

        ll mini = costCalculation(l,n,height,cost);
        cout<<mini<<endl;
    }

    return 0;
}
