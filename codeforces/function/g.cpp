#include <bits/stdc++.h>
using namespace std;

void MaxMin(int arr[],int n){
    int Max=INT_MIN,Min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>Max)Max=arr[i];
        else if(arr[i]<Min)Min=arr[i];
    }
    cout<<Min<<" "<<Max<<endl;

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[0]<<" "<<arr[0]<<endl;
        return 0;
    }else{
        MaxMin(arr,n);
    }

    return 0;
}
