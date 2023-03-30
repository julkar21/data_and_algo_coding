#include <bits/stdc++.h>
using namespace std;
int main(){

    int ra,ca,rb,cb;
    cin>>ra>>ca;
    int arr1[ra][ca];
    for(int i=0;i<ra;i++){
        for(int j=0;j<ca;j++){
            cin>>arr1[i][j];
        }
    }
    cin>>rb>>cb;
    int arr2[rb][cb];
    for(int i=0;i<rb;i++){
        for(int j=0;j<cb;j++){
            cin>>arr2[i][j];
        }
    }
    int result[ra][cb];
    for(int i=0;i<ra;i++){
        for(int j=0;j<cb;j++){
            result[i][j]=0;
            for(int k=0;k<rb;k++){
                result[i][j]+= arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<ra;i++){
        for(int j=0;j<cb;j++){
            if(j==cb-1)cout<<result[i][j];
            else cout<<result[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
