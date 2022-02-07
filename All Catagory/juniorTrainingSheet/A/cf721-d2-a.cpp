#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int index=0,moves=0,start=0;
    for(int i=0;i<s.length();i++){
        index = s[i]-97;
        int walk = abs(start-index);
        if(walk<13){
            moves+=walk;
        }else{
            moves+= 26-walk;
        }
        start=index;
    }
    cout<<moves<<endl;

    return 0;
}
