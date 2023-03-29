#include <bits/stdc++.h>
#define LIM 100005
#define ll long long
using namespace std;
vector<ll> primes;
int cut[LIM];
void gen_seive(int n){
    cut[0]=cut[1]=1;
    for(ll i=2;i*i<=n;i++){
        if(cut[i])continue;
        for(ll j=i*i;j<=n;j+=i){
            cut[j]=1;
        }
    }
    for(ll i=2;i<=n;i++){
        if(!cut[i]){primes.push_back(i);}
    }
}

bool check_almost_prime(int num){
    int chk=0;
    for(int i=0;i<primes.size();i++){
        if(num%primes[i]==0)chk++;
    }
    if(chk==2)return true;
    return false;
}

int main(){
    int n,ans=0;
    cin>>n;
    gen_seive(n);
    for(int i=1;i<=n;i++){
        bool flag = check_almost_prime(i);
        if(flag)ans++;
    }
    cout<<ans<<endl;
}
