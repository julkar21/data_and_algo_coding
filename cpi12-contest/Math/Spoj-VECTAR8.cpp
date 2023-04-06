#include <bits/stdc++.h>
using namespace std;
#define fasst_in_out ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
const ll N = 1e6;
const ll mod = 1000000007;


ll bigmod(ll a,ll b){
    if(!b) return 1;
    if(b%2) return (a*bigmod(a, b-1)) % mod;
    ll cur = bigmod(a, b/2);
    return (cur*cur) % mod;
}

vector<ll>v(N,0),primes;
ll prime_arr[N];

void seive(){

    prime_arr[0]=prime_arr[1]=1;
    for(ll i=2;i*i<=N;i++){
        if(!prime_arr[i]){
           for(ll j=i*i;j<=N;j+=i){
                prime_arr[j]=1;
            }
        }
    }
}

int afraid_primes(ll i){
    ll n=i,d=0;
    while(n>0){
        if(n%10==0)return 0;
        n=n/10;
        d++;
    }
    ll div=bigmod(10LL,d-1);
    n=i;
    while(n>0){
        n=n%div;
        div/=10;
        if(n!=0 && prime_arr[n]==1)return 0;
    }
    return 1;
}

int main(){
    fasst_in_out;
    ll t,n;
    seive();
    for(ll i=2;i<=N;i++){
        if(!prime_arr[i]){
            v[i]=afraid_primes(i);
        }
        v[i]=v[i-1]+v[i];
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<v[n]<<endl;
    }

    return 0;
}
