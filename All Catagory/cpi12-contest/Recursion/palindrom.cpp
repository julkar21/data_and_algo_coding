#include <bits/stdc++.h>
using namespace std;
bool palindrom(string str,int s,int e){
    if(s==e)return true;
    if(str[s]!=str[e])return false;
    if(s<e)
    return palindrom(str,s+1,e-1);
}
int main(){

    string s;
    cin>>s;
    cout<<palindrom(s,0,s.size()-1);

    return 0;
}
