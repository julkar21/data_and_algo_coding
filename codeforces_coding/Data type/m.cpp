#include <bits/stdc++.h>
using namespace std;
int main(){

    char ch;
    cin>>ch;
    if(ch>=65&&ch<=90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(ch>=97&&ch<=122){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }else cout<<"IS DIGIT"<<endl;

    return 0;
}
