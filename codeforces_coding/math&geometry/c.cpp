#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int a,b,sum=0,odd=0,even=0,x,y;
    cin>>a>>b;
    if(a>b)swap(a,b);

    x=(a+b)/2;
    y=b-a+1;
    cout<<y*(y+1);

   /* for(int i=a;i<=b;i++){
        sum+=i;
        if(i%2==0){
            even+=i;
        }else odd+=i;
    }*/
   // cout<<sum<<endl<<even<<endl<<odd<<endl;

}
