#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    vector<int>v1;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+')v1.push_back(s[i]-'0');
    }
    sort(v1.begin(),v1.end());
    int i=1;
    for(auto it=v1.begin();it!=v1.end();it++,++i){
        if(i==v1.size())cout<<*it;
        else cout<<*it<<"+";
    }


    return 0;
}
