#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;

double logTable[N];


void preCal(){
    logTable[0]=0;
    for(int i=1;i<=N;i++){
        logTable[i]=logTable[i-1]+log10(i);

    }
}

int main(){
    preCal();
    int t,n,b,result,cnt=1;
    cin>>t;
    while(t--){
        cin>>n>>b;
        result=(logTable[n]/log10(b))+1;
        cout<<"Case "<<cnt<<": "<<result<<endl;
        cnt++;
    }
}
