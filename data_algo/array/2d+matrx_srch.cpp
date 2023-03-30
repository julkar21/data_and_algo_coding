#include <bits/stdc++.h>
using namespace std;
int main(){

    int row,col,target;
    cin>>row>>col>>target;
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[row][col];
        }
    }
    int r=0,c=col-1;
    bool found;
    while(r<row&&col>=0){
        if(arr[r][c]==target){
            found=true;
        }
        if(arr[r][c]>target){
            c--;
        }else{
            r++;
        }
    }
    if(found)cout<<"found";
    else cout<<"not Found";
}
