#include <bits/stdc++.h>
using namespace std;
int main(){

    string s[6] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    int x,y;
    cin>>x>>y;
    x=max(x,y);
    cout<<s[6-x];

    return 0;
}
