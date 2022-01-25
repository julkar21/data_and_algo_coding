#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    map<int, int>c;
    int Count=0;
    while(n%2==0){
        ++Count;
        n=n/2;
    }
    if(Count!=0){
        c.insert({2,Count});
    }

    for(int i=3;i*i<=n;i=i+2){
        int Count=0;
        while(n%i==0){
            ++Count;
            n=n/i;
        }
    if(Count==0){
        continue;
    }else c.insert({i,Count});
    }
    if(n>2)c.insert({n,1});

    for(auto i=c.begin();i!=c.end();i++){
        if(i==prev(c.end()))cout<<"("<<i->first<<"^"<<i->second<<")";
        else cout<<"("<<i->first<<"^"<<i->second<<")"<<"*";
    }

    return 0;
}
