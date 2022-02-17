#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    if(s.length()<26){
        cout<<"NO"<<endl;
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.length();i++){
            mp.insert({s[i],0});
        }
        if(mp.size()==26){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }

    return 0;
}
