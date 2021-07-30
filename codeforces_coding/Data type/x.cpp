#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    if(c>b||a>d)cout<<"-1"<<endl;
    else{
        e=max(a,c);
        f=min(b,d);
        cout<<e<<" "<<f<<endl;
    }

    return 0;
}
