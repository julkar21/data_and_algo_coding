#include <bits/stdc++.h>
using namespace std;
bool prime(int n){

    int limit=sqrt(n+1);

    if(n<=1){
        //cout<<"NO"<<endl;
        return false;
    }

    for(int i=2;i<=limit;i++){
        if(n%i==0){
            //cout<<"NO"<<endl;
            return false;
        }
    }
    //cout<<"YES"<<endl;
    return 1;
}

int main(){


    int n;
    cin>>n;
    while(n){
        bool flag;
        int num;
        cin>>num;
        flag=prime(num);
        //cout<<num<<endl;
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        n--;
    }

    return 0;
}
