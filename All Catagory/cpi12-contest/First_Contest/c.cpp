#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j||i==k||j==k)continue;
                if((arr[i]-arr[j])%arr[k]!=0)flag=0;
            }
        }
    }
    if(flag){
        cout<<"yes"<<endl;
    }else cout<<"no"<<endl;


    return 0;
}
