#include <bits/stdc++.h>
using namespace std;

void pairsum(int arr[],int n,int k){

    int low=0;
    int high=n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            break;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }else
        {
            low++;
        }
    }


}

int main(){


    int arr[]={2,4,7,11,14,16,20,21};
    pairsum(arr,8,31);

    return 0;
}




