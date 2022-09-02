#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,crime,sum=0,untreat=0;
    cin>>n;
    while(n){
        cin>>crime;
        if(crime==-1&&sum==0){
            untreat++;
        }
        else sum+=crime;
        n--;
    }
    cout<<untreat<<endl;

    return 0;
}
