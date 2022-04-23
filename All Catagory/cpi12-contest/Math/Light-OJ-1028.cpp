#include<bits/stdc++.h>
using namespace std;
#define m 100
#define ll long long
ll int cnt,primes[m],siv[m];
void seive(){
    ll i,j;
    siv[0]=siv[1]=1;
    for(i=2;i*i<=m;i++){
        if(!siv[i]){
            for(j=i*i;j<=m;j+=i)
                siv[j]=1;
        }
    }
    cout<<"cnt: "<<cnt<<endl;
    primes[cnt++]=2;
    cout<<"primes[cnt++]: "<<primes[0]<<endl;
    for(i=3;i<m;i+=2){
        if(!siv[i]){primes[cnt++]=i;
        }
    }
    for(int k=0;k<100;k++)
    cout<<primes[k]<<endl;
}

int main(){

    seive();

    return 0;
}
