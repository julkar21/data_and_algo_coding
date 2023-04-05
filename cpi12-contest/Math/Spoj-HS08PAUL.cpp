#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define LIM 10000000
vector<int> primes,possible_prime;

void seive(){
    int prime_arr[LIM];
    prime_arr[0]=prime_arr[1]=1;
    for(ll i=2;i*i<=LIM;i++){
        if(!prime_arr[i]){
           for(ll j=i*i;j<=LIM;j+=i){
                prime_arr[j]=1;
            }
        }
    }
    for(ll i=2;i<=LIM;i++){
        if(!prime_arr[i])primes.push_back(i);
    }
}

void count_All_Possible_prime(){
    ll y=0,p=0;
    for(ll i=0;i<primes.size() && y+p<=primes[i];i++){
        for(ll j=1;j*j*j*j<primes[i];j++){
            p=j*j*j*j;
            y=primes[i]-p;
            ll k=sqrt(y);
            if(y==k*k){
                possible_prime.push_back(primes[i]);
                break;
            }
        }
    }
}

void solve(){
    int T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        ll l=0,r=possible_prime.size();
        while(l<r){
            ll mid=(l+r)/2;
            if(possible_prime[mid]>=n){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        if(possible_prime[l]==n)l++;
        cout<<l<<endl;
    }
}

int main(){
    seive();
    count_All_Possible_prime();
    solve();
    return 0;
}
