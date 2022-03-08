#include <bits/stdc++.h>
#define LIM 1000000000012LL
using namespace std;
typedef long long ll;

ll trail(ll N){
    ll cnt=0,d=5;
    while(d<=N){
        cnt+=N/d;
        d*=5;
    }
    return cnt;
}

ll solve(ll Q){
    ll lo=1,hi=1000000000000000000,mid;
    while(lo<hi){
        mid=(lo+hi)/2;
        if(Q<=trail(mid))hi=mid;
        else lo=mid+1;
    }
    if(trail(hi)==Q)cout<<hi;
    else cout<<"impossible";
    return 0;
}

int main(){

    int n,cs=1;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        cout<<"Case "<<cs++<<": ";
        solve(x);
        cout<<endl;
    }

    return 0;
}
