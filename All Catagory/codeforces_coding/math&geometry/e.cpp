#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int n,Count=0,sum=0;
    cin>>n;
    /*for(int i=1;i<=n;i++){
        sum+=i;
        Count++;
       if(sum<n){continue;}
       else if(sum==n){
           cout<<Count<<endl;
           break;
       }else{
            cout<<Count-1<<endl;
            break;
       }

    }*/
    cout<<int((-1 + sqrt(1 + 8 * n)) / 2)<<endl;

    return 0;
}
