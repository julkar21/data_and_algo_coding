#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int x,n,result=0,sum1=0,sum=1;;
    cin>>x>>n;
    if(x==0){
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=2;i<=n;i++){
        if(i%2==0){
            for(int j=0;j<i;j++){
                sum=sum*x;
                sum1=sum;
                //cout<<<<endl;
                //cout<<"i="<<i<<"j="<<j<<"sum="<<sum<<"sum1="<<sum1<<endl;
            }
            result=result+sum1;
            //cout<<"result="<<result<<endl;
            sum=1;
        }



    }
    cout<<result<<endl;

    return 0;
}
