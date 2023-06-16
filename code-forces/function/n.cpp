#include <bits/stdc++.h>
using namespace std;

void shiftZero(int arr[],int n){

    int Count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            Count++;
            continue;
        }else cout<<arr[i]<<" ";
    }
    for(int i=0;i<Count;i++){
        if(i==Count-1)cout<<0;
        else cout<<0<<" ";
    }


}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shiftZero(arr,n);

    return 0;
}
