#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    int cs=1;
    while(t--){
        string a;
        int b;
        cin>>a>>b;
        int j=0;
        if(a[0]=='-')j=1;
        if(b<0)b=abs(b);
        long rim=0;
        for(;j<a.size();j++){
            rim=rim*10+(a[j]-'0');
            rim=rim%b;
        }
        if(rim==0)
        cout<<"Case "<<cs++<<": divisible"<<endl;
        else
        cout<<"Case "<<cs++<<": not divisible"<<endl;
    }

    return 0;
}
