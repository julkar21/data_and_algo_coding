#include <bits/stdc++.h>
using namespace std;

void concateArray(int arr1[],int arr2[],int n){

    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

    for(int i=0;i<n;i++){
        if(i==n-1)cout<<arr1[i];
        else cout<<arr1[i]<<" ";
    }


}

int main(){

    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    concateArray(arr1,arr2,n);

    return 0;
}
