#include <bits/stdc++.h>
using namespace std;
int main(){

    long long a,b,q;
    cin>>a>>b>>q;
    if(q%3==1)cout<<a<<endl;
    else if(q%3==2)cout<<b<<endl;
    else {
        cout<<(a^b)<<endl;
    }

    return 0;
}
