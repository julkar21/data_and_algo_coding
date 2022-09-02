#include <bits/stdc++.h>
using namespace std;
int main(){

    int t,cs=1;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<"Case "<<cs++<<":"<<endl;
        while(q--){
            int L,R;
            cin>>L>>R;
            int lb=lower_bound(arr,arr+n,L)-arr;
            int ub=upper_bound(arr,arr+n,R)-arr;
            cout<<ub-lb<<endl;
        }
    }

    return 0;
}
