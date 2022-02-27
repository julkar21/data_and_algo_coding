#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<"Case "<<i+1<<":"<<endl;
        for(int i=0;i<q;i++){
            int a,b,cnt=0;
            cin>>a>>b;
            for(int i=0;i<n;i++){
                if(arr[i]>=a&&arr[i]<=b)cnt++;
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}
