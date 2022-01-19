#include <bits/stdc++.h>
using namespace std;

void average(double arr[], int n){

    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<fixed<<setprecision(7)<<(sum/n)<<endl;
}

int main(){

    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    average(arr,n);

    return 0;
}
