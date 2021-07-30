#include <bits/stdc++.h>
using namespace std;
int main(){

    long int a,b;
    char ch;
    cin>>a>>ch>>b;
    if(ch=='+'){
        cout<<a+b<<endl;
    }else
    if(ch=='-'){
        cout<<a-b<<endl;
    }else
    if(ch=='*'){
        cout<<a*b<<endl;
    }else
    {
        cout<<a/b<<endl;
    }

    return 0;
}
