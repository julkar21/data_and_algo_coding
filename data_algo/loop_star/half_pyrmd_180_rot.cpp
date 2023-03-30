#include <bits/stdc++.h>
using namespace std;
int main(){

    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=i;j<=row-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        /*
            if(j<=row-1)cout<<" ";
             else cout<<"*";
        */
        cout<<endl;
    }

    return 0;
}


