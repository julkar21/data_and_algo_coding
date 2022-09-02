#include <bits/stdc++.h>
using namespace std;

int f(vector<int>&v,int x){
    int days=1,cur=0;
    for(int i=0;i<v.size();i++){
        if(cur+v[i]<=x){
            cur+=v[i];
        }else if(v[i]>x)return INT_MAX;
        else{
            days++;
            cur=v[i];
        }
    }
    return days;
}

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,k;
        cin>>n>>k;
        n++;
        k++;
        vector<int> dis(n);
        for(int i=0;i<n;i++)
        cin>>dis[i];

        int lo=1,hi=10000000,mid;
        while(lo<hi){
            mid=(lo+hi)/2;
            if(f(dis,mid)<=k)hi=mid;
            else lo=mid+1;
        }
        cout<<"Case "<<t<<": "<<hi<<endl;

        int cnt=1,cur=0;
        for(int i=0;i<n;i++){
            if(cur+dis[i]<=hi && k-cnt <= n-i-1){
                cur+=dis[i];
            }else{
                cout<<cur<<endl;
                cur=dis[i];
                cnt++;
            }
        }
        cout<<cur<<endl;
    }

    return 0;
}
