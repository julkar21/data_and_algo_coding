#include <bits/stdc++.h>
using namespace std;

bool odd(int a){
    if(a%2==0)return false;
    else return true;
}

bool palindrom(int n){
    int binaryNum[32];
    int i=0;
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    string s;
    int d=i-1;
    for(int j=i-1;j>=0;j--){
        s.push_back(binaryNum[j]+'0');
    }
    for(int i=0;i<s.length()/2;i++,d--){
       if(s[i]!=s[d])return false;
    }
    return true;

}
int main(){


    long long n;
    bool numResult,palinResult;
    cin>>n;
    numResult=odd(n);
   //cout<<numResult<<endl;
    palinResult=palindrom(n);
    //cout<<palinResult;
    if(numResult && palinResult) cout<<"YES"<<endl;
    else cout<<"NO";

    return 0;
}
