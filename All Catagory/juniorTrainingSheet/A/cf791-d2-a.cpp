#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b,Count=0;
    cin>>a>>b;
    while(a<b || a==b){
        a*=3;
        b*=2;
        Count++;
    }
    cout<<Count<<endl;

    return 0;
}
