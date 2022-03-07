#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v,int x){
    int lo=0,hi=v.size(),mid;
    while(lo<hi){
        mid=(hi+lo)/2;
        if(x<=v[mid])hi=mid;
        else lo=mid+1;
    }
    return lo;
}

int main(){

    int T,cs=1;
    cin>>T;
    while(T--){
        int n,cnt=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int lb=lowerBound(v,(v[i]+v[j]));
                cnt+=(lb-j-1);
            }
        }
        cout<<"Case "<<cs++<<": "<<cnt<<endl;
    }

    return 0;
}
