#include <bits/stdc++.h>
#define LIM 1000006
#define ll long long
using namespace std;

ll cut[LIM];
ll siv[10000];

void seive(ll n){
    cut[0]=cut[1]=1;
    for(ll i=2;i*i<=n;i++){
        if(cut[i])continue;
        for(ll j=i*i;j<=n;j+=i){
            cut[j]=1;
        }
    }
    for(int i=2;i<=n;i++){
        if(!cut[i]){
            siv[i]=i;
        }
    }
}

int main(){
    seive(200);
    return 0;
}
