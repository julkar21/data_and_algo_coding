#include <bits/stdc++.h>
using namespace std;
int main(){

    string s,w;
    vector<string> v;
    getline(cin,s);


    for(int i=0;i<s.length();i++){
        if(!isalpha(s[i]))s[i]= ' ';
    }

    stringstream ss(s);
    while(ss>>w)v.push_back(w);

    //for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
    //cout<<v[8]<<endl;
    cout<<"username: "<<v[7]<<endl;
    cout<<"pwd: "<<v[9]<<endl;
    cout<<"profile: "<<v[11]<<endl;
    cout<<"role: "<<v[13]<<endl;
    cout<<"key: "<<v[15]<<endl;


    return 0;
}
