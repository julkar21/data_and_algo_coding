#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int n;
    cin>>n;
    if(n<=1){
        cout<<"NO"<<endl;
        return 0;
    }
    int limit = sqrt(n);
    for(int i=2;i<=limit;i++){
        if(n%i==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
