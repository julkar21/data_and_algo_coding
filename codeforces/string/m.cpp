#include <bits/stdc++.h>
using namespace std;

unordered_set<string> subseq;

void subsequence(string t,int i,int n,string &s){
    if(i==n){
        if(t=="hello"){
            subseq.insert(t);
        }
    }else{
        subsequence(t,i+1,n,s);
        t=t+s[i];
        subsequence(t,i+1,n,s);
    }

}

int main(){

    string s;
    cin>>s;
    subsequence("",0,s.length(),s);
    bool flag=0;
    for(auto i : subseq){
        if(i=="hello"){
            flag=1;
        }
    }
    if(flag){
            cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    return 0;
}
