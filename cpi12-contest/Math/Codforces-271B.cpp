#include <bits/stdc++.h>
#define ll long long
#define LIM 100010
using namespace std;
vector<int>primes;

void seive(){
    bool prime_arr[LIM];
    memset(prime_arr, true, sizeof(prime_arr));
    primes.push_back(2);
    for(ll i=3;i*i<=LIM;i+=2){
        if(prime_arr[i]){
            for(ll j=i*i;j<=LIM;j+=(i+i)){
                prime_arr[j]=false;
            }
        }
    }
    for(ll i=3;i<=LIM;i+=2){
        if(prime_arr[i])primes.push_back(i);
    }
}

int main(){
    int n,m;
    seive();
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    ll mn = LONG_MAX;
    //row wise traverse
    for(int i =0;i<n;i++){
        ll sum =0;
        for(int j=0;j<m;j++){
            int t=arr[i][j];
            int next_prime = *lower_bound(primes.begin(), primes.end(), t);
            arr[i][j] = next_prime-t;
            sum+=arr[i][j];
        }
        mn=min(mn,sum);
    }
    //column wise traverse
    for(int i=0;i<m;i++){
        ll sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        mn=min(mn,sum);
    }
    cout<<mn;
    return 0;
}
