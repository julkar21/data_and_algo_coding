#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    int Count=0;
    for(int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
            if(s[j]==s[i] && i!=j){
                Count++;
                break;
            }
        }
    }
    int result = s.length()-Count;
    if(result%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!" <<endl;

    return 0;
}
