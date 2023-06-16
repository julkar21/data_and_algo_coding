#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    bool ck[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        ck[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0)ck[a[i]]=true;
    }
    for(int i=0;i<n;i++){
        if(ck[i]==false){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
