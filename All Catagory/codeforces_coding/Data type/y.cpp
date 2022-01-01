#include <bits/stdc++.h>
using namespace std;
int main(){

    unsigned long long int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=(a%100*b%100*c%100*d%100)%100;
    if(e<10)cout<<0<<e<<endl;
    else cout<<e<<endl;

    return 0;
}

