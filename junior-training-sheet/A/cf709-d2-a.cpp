#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,b,d;
    cin>>n>>b>>d;
    int a[n]={0};

    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum=0,coun=0;

    for(int i=0;i<n;i++){
        if(a[i]>b)continue;
        else{
            sum+=a[i];
            if(sum>d){
                sum=0;
                coun++;
            }
        }
    }
    cout<<coun<<endl;

    return 0;
}
