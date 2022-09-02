#include<bits/stdc++.h>
using namespace std;

#define m 1000010
#define ll long long

ll int cnt,primes[m],siv[m];
void seive(){
    ll i,j;
   /* siv[0]=siv[1]=1;
    for(i=2;i*i<=m;i++){
        if(!siv[i]){
            for(j=i*i;j<=m;j+=i)
                siv[j]=1;
        }
    }*/
    for(i=3;i<=m;i+=2){
        if(!siv[i]){
            for(j=i*i;j<m;j+=i+i)
                siv[j]=1;
        }
    }
    primes[cnt++]=2;
    for(i=3;i<m;i+=2){
        if(!siv[i]){
            primes[cnt++]=i;
        }
    }
    return;
}

int main(){

    seive();
    int t,c=0;
    cin>>t;
    while(t--){
        ll int n,sum=1,k,i;
        cin>>n;
        for(i=0;i<m&&primes[i]*primes[i]<=n;i++){
            if(n%primes[i]==0){
                k=0;
                while(n%primes[i]==0){
                    n/=primes[i];
                    k++;
                    if(n==0||n==1)
                        break;
                }
                sum*=k+1;
            }
        }
        if(n!=1)sum*=2;
         printf("Case %lld: %lld\n",++c,sum-1);
    }
    return 0;
}
