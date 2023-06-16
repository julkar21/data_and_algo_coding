#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int m=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int sum1=0,cnt=0;
    for(int i=n-1;i>=0;i--){
        if(sum1>sum/2)break;
        cnt++;
        sum1+=arr[i];
    }
    cout<<cnt<<endl;
    return 0;
}
