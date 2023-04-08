#include <bits/stdc++.h>
using namespace std;
#define LIM 2000001
#define ll long long

vector<ll>primes,special_number;


int prime_arr[LIM];
void seive(){
    prime_arr[0]=prime_arr[1]=0;
    for(ll i=2;i*i<=LIM;i++){
        if(!prime_arr[i]){
            for(ll j=i*i;j<=LIM;j=+i){
                prime_arr[j]=1;
            }
        }
    }
    for(ll i=2;i<=LIM;i++){
        if(!prime_arr[i])
        primes.push_back(i);
    }
    for(ll i=0;i<primes.size();i++){
        for(ll j=i+1;j<primes.size() && (ll)primes[i]*primes[j]<=LIM;j++){
            special_number.push_back(primes[i]*primes[j]);
        }
    }
    sort(special_number.begin(), special_number.end());
}

int main(){
    seive();
    int T,k;
    cin>>T;
    while(T--){
        cin>>k;
        cout<<special_number[k-1]<<endl;
    }

    return 0;
}
