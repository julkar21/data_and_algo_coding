#include <bits/stdc++.h>
using namespace std;
int main(){
    //34688642 -851839419 395784949 490743112

    long long int a,b,c, d;
    cin>>a>>b>>c>>d;

       if(((a+b)+c)==d)cout<<"YES"<<endl;
    else if(((a+b)-c)==d)cout<<"YES"<<endl;
    else if(((a+b)*c)==d)cout<<"YES"<<endl;
    else if(((a-b)+c)==d)cout<<"YES"<<endl;
    else if(((a-b)-c)==d)cout<<"YES"<<endl;
    else if(((a-b)*c)==d)cout<<"YES"<<endl;
    else if(((a*b)+c)==d)cout<<"YES"<<endl;
    else if(((a*b)-c)==d)cout<<"YES"<<endl;
    else if(((a*b)*c)==d)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
