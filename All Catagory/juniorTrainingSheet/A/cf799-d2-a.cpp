#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,d,t1,t2;
    cin>>n>>t>>k>>d;
    /*if(n%k==0){
        t1=n/k*t;
    }else{
        t1=n/k;
        t1++;
        t1*=t;
    }*/
    t1=(n+k-1)/k*t;
    t2=d+t;
    //cout<<"t1="<<t1<<endl;
    //cout<<"t2="<<t2<<endl;
    if(t1<=t2){
        cout<<"NO";
    }else
    cout<<"YES";
}

