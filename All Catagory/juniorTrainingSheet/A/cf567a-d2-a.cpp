#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++){
        int mini=0,Max=0;
        if(i==0)mini=(abs(x[i]-x[i+1]));
        else if(i==n-1)mini=(abs(x[i]-x[i-1]));
        else mini=min(abs(x[i]-x[i+1]),abs(x[i]-x[i-1]));
        Max=max(abs(x[i]-x[0]),abs(x[i]-x[n-1]));
        cout<<mini<<" "<<Max<<endl;
    }

    return 0;
}
