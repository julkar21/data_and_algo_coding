#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<string> str;

    string s;
    for(int i=0;i<3;i++){
        cin>>s;
        str.push_back(s);
    }
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=="bubble" || str[i]=="tapioka")continue;
        cout<<str[i]<<" ";
        cnt++;
    }
    if(cnt==0)cout<<"nothing";

    return 0;
}
