#include <bits/stdc++.h>

using namespace std;

#define m 1000003
typedef long long int ll;
ll fact[m];

ll bigmod ( ll x, ll n) {
    if(n==0)return 1%m;
    ll u=bigmod(x,n/2);
    u=(u*u)%m;
    if(n%2==1)u=(u*x)%m;
    return u;
}

void factorial(){

    fact[0]=1;
    for(int i=1;i<m;i++){
        fact[i]=(fact[i-1]*1LL*i)%m;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    factorial();
    int T,cs=1;
    cin>>T;
    while(T--){
        ll ans,n,k,a,b;
        cin>>n>>k;
        ans = fact[n];
        a = bigmod(fact[k],m-2);
        b = bigmod(fact[n-k],m-2);
        ans=(ans*a*b)%m;
        cout<<"Case "<<cs++<<": "<<ans<<endl;
    }
    return 0;
}
