#include <bits/stdc++.h>
using namespace std;
int main(){

    set<int> s;
    int n;
    for(int i=0;i<4;i++){
        cin>>n;
        s.insert(n);
    }
    cout<<4-s.size()<<endl;

    return 0;
}
