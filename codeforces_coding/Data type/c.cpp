#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int x,y,sum=0,sub=0,mul=0;
    cin>>x>>y;
    sum=x+y;
    sub=x-y;
    mul=x*y;
    cout<<x<<" "<<"+"<<" "<<y<<" "<<"="<<" "<<sum<<endl;
    cout<<x<<" "<<"*"<<" "<<y<<" "<<"="<<" "<<mul<<endl;
    cout<<x<<" "<<"-"<<" "<<y<<" "<<"="<<" "<<sub<<endl;

    return 0;
}
