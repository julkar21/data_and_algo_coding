#include <bits/stdc++.h>
using namespace std;

void shift(int arr[],int n,int shift_num){

    for(int i=1;i<=shift_num;i++){
        int last = arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

int main(){

    int n,shift_num;
    cin>>n>>shift_num;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shift(arr,n,shift_num);

    return 0;
}
