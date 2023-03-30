#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<string>v,v1,concat;
    string temp,temp1,s;
    getline(cin,s);
    if(s.length()==1){
        cout<<s<<endl;
        return 0;
    }
    for(int i=1;i<s.length();i++){
        v.push_back(s.substr(0,i));
        v1.push_back(s.substr(i,s.length()));
        sort(v[i-1].begin(),v[i-1].end());
        sort(v1[i-1].begin(),v1[i-1].end());
        concat.push_back(v[i-1]+v1[i-1]);
        //cout<<v[i-1]<<' ';
       // cout<<v1[i-1]<<' ';
       // cout<<concat[i-1]<<' ';
       // cout<<endl;
    }
    sort(concat.begin(),concat.end());
    cout<<concat[0];
    return 0;
}
