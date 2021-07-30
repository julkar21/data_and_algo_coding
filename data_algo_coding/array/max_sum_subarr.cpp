#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int mx=0;
    for(int i=0;i<n;i++){ //array start point
        for(int j=i;j<n;j++){ //array end point
            int sum=0;
            for(int k=i;k<=j;k++){ //immediate start(i) to end(j)
                sum+=a[k];
            }
            mx=max(mx,sum);
        }
    }
    cout<<mx;

    return 0;
}
