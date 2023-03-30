#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int d=a[1]-a[0],ans=2,cur=2;
    int j=2;
    while(j<n){
        if(d==a[j]-a[j-1]){
            cur++;
        }else{
            d=a[j]-a[j-1];
            d=2;
        }
        ans=max(ans,cur);
        j++;
    }

    cout<<ans;

    return 0;
}

