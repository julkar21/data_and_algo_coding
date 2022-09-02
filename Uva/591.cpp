#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,cas=0;
    int h[100];
    while(scanf("%d",&n)==1&&n){
        int ans=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>h[i];
            sum+=h[i];
        }
        sum/=n;
        for(int i=0;i<n;i++){
            ans += abs(h[i]-sum);
        }
        ans/=2;
        cout<<"Set #"<<++cas<<endl;
        printf("The minimum number of moves is %d.\n\n",ans);
    }

    return 0;
}
