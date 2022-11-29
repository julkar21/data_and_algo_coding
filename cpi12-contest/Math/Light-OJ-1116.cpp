#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    int cs=1;
    while(t--){
        long long w,n,m;
        cin>>w;
        if(w%2==0){
            n=w/2;
            m=2;
            while(n%2==0){
                n /= 2;
                m *= 2;
            }
            cout<<"Case "<<cs++<<": "<<n<<" "<<m<<endl;
        }else{
            cout<<"Case "<<cs++<<": Impossible"<<endl;
        }
    }

    return 0;
}
