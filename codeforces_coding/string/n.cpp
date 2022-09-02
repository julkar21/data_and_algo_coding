#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mx=-1;
void subsequence(string t,int i,int n,string &s){
    if(i==n){
        int x=t.size();
        if(x>mx){
            mx=x;
        }
        //cout<<t.size()<<endl;
        return ;
    }
    subsequence(t,i+1,n,s);
    t=t+s[i];
    subsequence(t,i+1,n,s);

}
int main(){
    string s;
    cin>>s;
    subsequence("",0,s.length(),s);
    cout<<mx<<endl;

    return 0;
}
