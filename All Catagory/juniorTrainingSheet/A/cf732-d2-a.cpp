#include <bits/stdc++.h>
using namespace std;
int main(){

    int k,r;
    cin>>k>>r;
    for(int i=1;i<=10;i++){
        if(((k*i)%10==0)||((k*i)%10==r)){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
