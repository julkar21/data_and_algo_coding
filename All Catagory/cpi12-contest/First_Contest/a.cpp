#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    int sum=0,sum1=0;
    sum=arr[0]+arr[1]+arr[2];
    sum1=arr[1]+arr[2]+arr[3];
    if(sum>=arr[4]||sum1>=arr[4]){
        cout<<"WAW"<<endl;
    }else cout<<"AWW"<<endl;

    return 0;
}
