#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int sol[n]={0};
    for(int i=0;i<n;i++){
        sol[arr[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        if(i==n-1)cout<<sol[i];
        else cout<<sol[i]<<" ";
    }



    return 0;
}
