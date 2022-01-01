#include <bits/stdc++.h>
using namespace std;
int main(){

    cout<<fixed<<setprecision(2);
    int a,b;
    float p,ans;
    cin>>a>>b;
    p=(double)a/100;
    ans=b/(1-p);
    cout<<ans<<endl;

    return 0;
}
