#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b,x;
    long long sum=0;
    cin>>a>>b>>x;
    if(a>b)swap(a,b);
    if(b==x){
        cout<<b<<endl;
        return 0;
    }
    for(int i=a;i<=b;i++){
        if(i%x==0)sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}
