#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n,Count=0;
    cin>>n;
    long long arr[n];
    int m = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+m);
    for(int i=1;i<n-1;i++){
        if(arr[0]<arr[i]&&arr[n-1]>arr[i])Count++;
    }
    cout<<Count<<endl;

    return 0;
}
