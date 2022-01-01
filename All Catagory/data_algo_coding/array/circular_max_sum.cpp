#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[],int n){

    int maxsum=INT_MIN,currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0)currsum=0;
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int wrapsum=0,nonwrapsum=0;
    nonwrapsum=kadanes(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum += arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadanes(arr,n);
    int maxsum=max(wrapsum,nonwrapsum);

    cout<<maxsum;

    return 0;
}


