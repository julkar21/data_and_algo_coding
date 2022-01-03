#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,index;
    string key,original,s;
    key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    scanf("%d",&n);
    cin>>s;
    //cout<<s.find('k')<<endl;
    if(n==1){
        for(int i=0;i<s.length();i++){
            index=original.find(s[i]);
            cout<<key[index];
        }
    }else{
        for(int i=0;i<s.length();i++){
            index=key.find(s[i]);
            cout<<original[index];
        }
    }


    //cout<<key[0]<<endl;
    //cout<<original[0]<<endl;

    return 0;
}
